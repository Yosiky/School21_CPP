#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <algorithm>

template <class T>
class PmergeMe {

    typedef T   container;

    container c;

    PmergeMe(void);

public:

    PmergeMe(int argc, char **argv) {
        for (int i = 0; i < argc; ++i) {
            c.push_back(std::atoi(argv[i]));
        }
    }

    void sort(void) {
        std::sort(c.begin(), c.end());
    }

};

#endif  // PMERGE_HPP
