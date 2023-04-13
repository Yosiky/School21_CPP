#include <iostream>
#include "PmergeMe.hpp"

#define START_TIMER

#define FINISH_TIMER

int main(int argc, char **argv) {
    char **values;

    if (argc == 2) {
    }
    else if (argc > 2) {
        vlaues = argv + 1;
    }
    else {
        std::cerr << "Error" << std::endl;
        return (0);
    }
    PmergeMe<list<int> > ans;
    START_TIMER;
    PmergeMe<list<int> > one(values);
    one.sort();
    FINISH_TIMER;
    START_TIMER;
    PmergeMe<deque<int> > two(values);
    two.sort();
    FINISH_TIMER;
    return (0);
}
