#include "BitcoinExchange.hpp"

static bool isLeapYear(int y) {
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

static bool checkYearMonthDay(int y, int m, int d) {
    if (y < 0 || m < 0 || m > 12 || d < 0)
        return (false);
    if (m == 2) {
        if (isLeapYear(y))
            return (d <= 29);
        else
            return (d <= 28);
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return (d <= 31);
    return (d <= 30);
}

static bool parseDate(std::string &argDst, const std::string &argSrc, int argFinish) {
    std::stringstream src(argSrc);
    int year, month, day;
    char value;

    try {
        src >> year >> value;
        if (year < 0 || value != '-')
            return (false);
        src >> month >> value;
        if (value != '-')
            return (false);
        src >> day;
        if (!checkYearMonthDay(year, month, day))
            return (false);
        argDst = argSrc.substr(0, argFinish);
    }
    catch (std::exception &a) {
        return (false);
    }
    return (true);
}

static int parseValue(float &argDst, const std::string &argSrc, int argStart, float maxValue) {
    std::stringstream src(argSrc.c_str() + argStart);
    try {
        src >> argDst;
        if (argDst < 0)
            return (1);
        else if (argDst > maxValue)
            return (2);
    }
    catch (std::exception &a) {
        return (3);
    }
    return (0);
}

BitcoinExchange::BitcoinExchange(const std::string &argNameFile, const std::string &argSep, float maxValue) {
    std::ifstream fd(argNameFile.c_str());
    int indx;
    std::pair<std::string, float> value;
    std::string line;

    if (!fd.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        std::exit(0);
    }
    std::getline(fd, line);
    for (; std::getline(fd, line);) {
        indx = line.find(argSep);
        if (indx == (int)std::string::npos) {
            std::cerr << "Error: bad separate => " << line << std::endl;
            continue ;
        }
        if (!parseDate(value.first, line, indx)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue ;
        }
        switch (parseValue(value.second, line, indx + argSep.size(), maxValue)) {
            case (1) : std::cerr << "Error: not a positive number." << std::endl; continue ;
            case (2) : std::cerr << "Error: too large a number." << std::endl; continue ;
        }
        array.push_back(value);
    }
    fd.close();
}

BitcoinExchange::~BitcoinExchange(void) { }

const std::pair<std::string, float> BitcoinExchange::getTop(void) {
    return (array.back());
}

void BitcoinExchange::pop(void) {
    array.pop_back();
}

static int strCmp(const std::string &a, const std::string &b) {
    std::stringstream one(a);
    std::stringstream two(b);
    int f;
    int s;

    for (int i = 0; i < 3; ++i) {
        one >> f;
        one.ignore();
        two >> s;
        two.ignore();
        if (f != s)
            return (f - s);
    }
    return (0);
}

float BitcoinExchange::lowerBound(const std::string &date) {
    int ans;
    int size = array.size();

    for (int i = 0; i < size; ++i) {
        ans = strCmp(array[i].first, date);
        if (ans == 0) {
            return (array[i].second);
        }
        else if (ans > 0) {
            return (array[std::max(0, i - 1)].second);
        }
    }
    return (array.back().second);
}

int BitcoinExchange::size(void) const {
    return (array.size());
}

void BitcoinExchange::print(void) {
    int size = array.size();

    for (int i = 0; i < size; ++i) {
        std::cout << array[i].first << " " << array[i].second << std::endl;
    }
}
