#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &obj)
{
    (void)obj;
    return (*this);
}
void    PmergeMe::printVector()
{
    for(size_t i = 0; i < myVector.size(); i++)
        std::cout<<myVector[i]<<" ";
    std::cout<<"\n";
}

void    PmergeMe::printDeque()
{
    for(size_t i = 0; i < myDeque.size(); i++)
        std::cout<<myDeque[i]<<std::endl;
}


bool    isValidNumber(const std::string &arg)
{
     for(size_t i = 0; i < arg.size(); i++)
    {
        if(isdigit(arg[i]) == 0)
            return false;
    }
    return true;
}


void  PmergeMe::checkArg(char **av)
{
    std::vector<unsigned int> arg;
    int i = 1;

    while(av[i])
    {
        std::string value = av[i];
        char *endptr;
        long res = strtol(value.c_str(), &endptr, 10);
        if(!isValidNumber(value) || res < 0)
            throw "Error";
        if(res > std::numeric_limits<unsigned int>::max())
        {
             std::cout<<"Number is too large for an unsigned int"<<std::endl;
             exit(0);
        }
        myVector.push_back(atoi(value.c_str()));
        myDeque.push_back(atoi(value.c_str()));
        i++;
    }
}


bool PmergeMe::comparePairs(const std::pair<unsigned int, unsigned int>& a, const std::pair<unsigned int, unsigned int>& b) {
    return a.first < b.first;
}

void    PmergeMe::sortVector(std::vector<unsigned int> &sorted_arr,  std::vector<unsigned int> &unsorted_arr)
{


    int lastNumber = -1;
    size_t i = 0;
    if(myVector.size() % 2 == 1)
    {
        lastNumber = myVector.back();
        myVector.pop_back();
    }
    clock_t start_time = clock();
    std::vector<std::pair<unsigned int, unsigned int> > pairs;
    for(i = 0; i < myVector.size(); i += 2) {
        pairs.push_back(std::make_pair(myVector[i], myVector[i + 1]));
    }

    std::sort(pairs.begin(), pairs.end(), &PmergeMe::comparePairs);
    for(i = 0; i < pairs.size(); i++)
    {
        sorted_arr.push_back(pairs[i].first);
        unsorted_arr.push_back(pairs[i].second);
    }
    std::vector<unsigned int>::iterator it;
    for( i = 0; i < unsorted_arr.size(); i++)
    {
        it = std::lower_bound(sorted_arr.begin(), sorted_arr.end(), unsorted_arr[i]);
        sorted_arr.insert(it, unsorted_arr[i]);
    }
    if(lastNumber > -1)
    {
        it = std::lower_bound(sorted_arr.begin(), sorted_arr.end(), lastNumber);
        sorted_arr.insert(it, lastNumber);
    }
    clock_t end_time = clock();
    double duration = static_cast<double>(end_time - start_time) / (CLOCKS_PER_SEC / 1000000);
    myVector = sorted_arr;
    std::cout<<"After : ";
    printVector();
    std::cout<<"Time to process a range of "<<myVector.size()<<" elements with std::vector<unsigned int> : "<<duration<<" us"<<std::endl;

}

void    PmergeMe::sortDeque(std::deque<unsigned int> &sorted_arr,  std::deque<unsigned int> &unsorted_arr)
{

    int lastNumber = -1;
    size_t i = 0;
    if(myDeque.size() % 2 == 1)
    {
        lastNumber = myDeque.back();
        myDeque.pop_back();
    }
    clock_t start_time = clock();
    std::deque<std::pair<unsigned int, unsigned int> > pairs;
    for(i = 0; i < myDeque.size(); i += 2) {
        pairs.push_back(std::make_pair(myDeque[i], myDeque[i + 1]));
    }

    std::sort(pairs.begin(), pairs.end(), &PmergeMe::comparePairs);
    for(i = 0; i < pairs.size(); i++)
    {
        sorted_arr.push_back(pairs[i].first);
        unsorted_arr.push_back(pairs[i].second);
    }
    std::deque<unsigned int>::iterator it;
    for( i = 0; i < unsorted_arr.size(); i++)
    {
        it = std::lower_bound(sorted_arr.begin(), sorted_arr.end(), unsorted_arr[i]);
        sorted_arr.insert(it, unsorted_arr[i]);
    }
    if(lastNumber > -1)
    {
        it = std::lower_bound(sorted_arr.begin(), sorted_arr.end(), lastNumber);
        sorted_arr.insert(it, lastNumber);
    }
    clock_t end_time = clock();
    double duration = static_cast<double>(end_time - start_time) / (CLOCKS_PER_SEC / 1000000);
    myDeque = sorted_arr;
    std::cout<<"Time to process a range of "<<myVector.size()<<" elements with std::deque<unsigned int> : "<<duration<<" us"<<std::endl;
}


void    PmergeMe::sortArg()
{
    std::vector<unsigned int> sorted_arr, unsorted_arr;
    std::deque<unsigned int> s_arr, un_arr;

    std::cout<<"Before: ";
    printVector();
    sortVector(sorted_arr, unsorted_arr);
    sortDeque(s_arr, un_arr);
}

PmergeMe::~PmergeMe()
{

}