#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>
# include <exception>
# include <cstdlib>
# include <climits>

class BitcoinExchange {
    std::vector<std::pair<std::string, float> > array;

    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange &argCopy);
    BitcoinExchange &operator=(const BitcoinExchange &argCopy);

public:

    BitcoinExchange(const std::string &argNameFile, const std::string &argSep, float maxValue = (float)INT_MAX);
    ~BitcoinExchange(void);

    const std::pair<std::string, float> getTop(void);
    void pop(void);
    float lowerBound(const std::string &date);

    int size(void) const;
    void print(void);

};

#endif  // BITCOINECXHANGE_HPP
