#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class   Data
{
private:
    std::string data;

    Data(const Data &obj);
    Data    &operator=(const Data &obj);
public:
    Data(void);
    ~Data(void);
                                            
    const std::string   &getData(void);
    void    setData(const std::string str);
};

#endif
