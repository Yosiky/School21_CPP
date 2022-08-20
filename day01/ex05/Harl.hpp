#ifndef HARL_HPP
# define HARL_HPP

# define CRINGE_BUFFER_SIZE 256

#include <string>
#include <iostream>

class Harl
{
private:
    void    (Harl::*funcs[CRINGE_BUFFER_SIZE])();
    void     debug(void);
    void     info(void);
    void     warning(void);
    void     error(void);
    unsigned char   hash(const std::string &str);
    void     something(void);

    Harl(const Harl &obj);
    Harl    &operator=(const Harl &obj);
public:
    
    Harl(void);
    ~Harl(void);

    void    complain(std::string level);

};

#endif
