#ifndef HARL_HPP
# define HARL_HPP

# define CRINGE_BUFFER_SIZE 256

#include <string>
#include <iostream>

class Harl
{
private:
    void    (*funcs[CRINGE_BUFFER_SIZE])();
    static void     debug(void);
    static void     info(void);
    static void     warning(void);
    static void     error(void);
    unsigned char   hash(const std::string &str);
    static void     something(void);
public:
    
    Harl(void);

    void    complain(std::string level);

};

#endif
