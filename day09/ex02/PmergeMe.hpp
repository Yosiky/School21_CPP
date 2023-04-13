#ifndef PMERGE_HPP
# define PMERGE_HPP

# include "algorithm"

template <class T>
class Pmerge {

    typedef T   container;

    container c;

    Pmerge(void);

public:

    Pmerge(int argc, char **argv) {
        for (int i = 0; i < argc; ++i) {
            c.push_back(std::atoi(argv[i]));
        }
    }

    void sort(void) {
        std::merge(c.begin(), c.end());
    }

};

#endif  // PMERGE_HPP
