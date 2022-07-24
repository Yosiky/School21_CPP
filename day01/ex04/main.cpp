#include <fstream>
#include <iostream>

void    copy(std::ifstream &in, std::ofstream &out, std::string &s1, std::string &s2)
{
    size_t      pos;
    size_t      left;
    const char  *str;
    std::string value;

    while (!in.eof())
    {
        left = 0;
        pos = std::string::npos;
        std::getline(in, value);
        str = value.c_str();
        pos = value.find(s1, left);
        while (pos != std::string::npos)
        {
            out << value.substr(left, pos - left);
            out << s2;
            left += pos + s1.size();
            pos = value.find(s1, left);
        }
        out << value.substr(left, value.size());
        if (!in.eof())
            out << std::endl;
    }
}

int error(const std::string &str, int num)
{
    std::cerr << str << std::endl;
    return num;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return error("Error: your input haven't 3 arguments", 1);
    std::string     fileName(argv[1]);
    std::string     s1(argv[2]);
    std::string     s2(argv[3]);
    if (fileName.size() == 0)
        return error("Error: your name file is empyt", 2); 
    if (s1 == "")
        return error("Error: size string s1 is 0", 3); 
    else
    {
        std::ifstream   input(fileName);
        std::ofstream   output(fileName + ".replace");
        int             flag = (input.is_open() << 1) + (output.is_open());
        if (flag == 3)
            copy(input, output, s1, s2);
        if (flag & 2)
            input.close();
        if (flag & 1)
            output.close();
        if (flag != 3)
            return error("Error: file not open", 4);
    }
    return 0;
}
