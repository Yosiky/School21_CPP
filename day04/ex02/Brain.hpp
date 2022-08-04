#ifndef BRAIN_HPP
# define BRAIN_HPP

# define BRAIN_COUNT_IDEAS 100

# include <string>
# include <iostream>

class   Brain
{
public:
    std::string ideas[BRAIN_COUNT_IDEAS];

    Brain(void);
    Brain(const Brain &obj);
    ~Brain(void);

    Brain   &operator=(const Brain &obj);
};

#endif //BRAIN_HPP
