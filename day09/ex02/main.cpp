#include <iostream>
#include <list>
#include <deque>
#include "PmergeMe.hpp"

#define START_TIMER

#define FINISH_TIMER

int main(int argc, char **argv) {

    if (argc == 2) {
    }
    else if (argc > 2) {
        ++argc;
        ++argv;
    }
    else {
        std::cerr << "Error" << std::endl;
        return (0);
    }

    START_TIMER;
    PmergeMe<std::list<int> > one(argc, argv);
    FINISH_TIMER;
    START_TIMER;
    PmergeMe<std::deque<int> > two(argc, argv);
    FINISH_TIMER;
    return (0);
}
