#include "easyfind.hpp"
#include <vector>
#include <deque>

using namespace std;

int main()
{
    try
    {
        std::vector<int> a(6);
    
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        a.push_back(9);
        a.push_back(10);
        std::vector<int>::iterator it = easyfind(a, 3);
        std::cout<<*it<<std::endl;
    }
    catch(const char *str)
    {
        std::cout<<"Element "<<str<<std::endl;
    }
    // try
    // {
    //     std::deque<int> a(6);
    
    //     a.push_front(3);
    //     a.push_back(4);
    //     a.push_back(5);
    //     a.push_front(9);
    //     a.push_back(10);
    //     std::deque<int>::iterator it = easyfind(a, 10);
    //     std::cout<<*it<<std::endl;
    // }
    // catch(std::exception &e)
    // {
    //     std::cout<<e.what()<<std::endl;
    // }
}