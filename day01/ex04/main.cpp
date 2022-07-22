#include <fstream>
#include <iostream>

void    copy(std::ifstream &in, std::ofstream &out, std::string &s1, std::string &s2)
{
    size_t      pos;
    size_t      left = 0;
    const char  *str;
    std::string value;

    while (!in.eof())
    {
        std::getline(in, value);
        str = value.c_str();
        pos = value.find(s1, 0);
        while (pos != std::string::npos)
        {
            out << value.substr(left, pos - left);
            out << s2;
            left += pos + s1.size();
            pos = value.find(s1, left);
        }
        out << value.substr(left, value.size()) << std::endl;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: your input haven't 3 arguments" << std::endl;
        return 1;
    }
    std::string     fileName(argv[1]);
    std::string     s1(argv[2]);
    std::string     s2(argv[3]);
    std::ifstream   input(fileName);
    std::ofstream   output(fileName + ".replace");
    int             flag = (input.is_open() << 1) + (output.is_open());
    if (s1 == "")
    {
        std::cerr << "Error: size string s1 is 0" << std::endl;
    }
    else
    {
        if (flag == 3)
            copy(input, output, s1, s2);
        else
            std::cerr << "Error: file not open" << std::endl;
    }
    if (flag & 2)
        input.close();
    if (flag & 1)
        output.close();
    return 0;
}
