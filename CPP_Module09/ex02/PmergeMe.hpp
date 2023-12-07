#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <sys/time.h>
#include <ctime>
#include <deque>

class PmergeMe
{
    private:
        std::vector<unsigned int>    myVector;
        std::deque<unsigned int>     myDeque;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &);
        PmergeMe &operator=(const PmergeMe &);

        void    checkArg(char **);
        void    sortArg();
        void    sortVector(std::vector<unsigned int> &,  std::vector<unsigned int> &);
        void    sortDeque(std::deque<unsigned int> &,  std::deque<unsigned int> &);
        void    printVector();
        void    printDeque();
        static bool    comparePairs(const std::pair<unsigned int, unsigned int> &a, const std::pair<unsigned int, unsigned int> &b);
        ~PmergeMe();
};


#endif