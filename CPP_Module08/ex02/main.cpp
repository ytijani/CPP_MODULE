#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout <<"Get Top of Stack : "<<mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size of STACK : "<<mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();  
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    {
        std::cout<<"LIST_BOM"<<std::endl;
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout <<"Get Top of list : " <<mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << "Size of list : "<<mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;
}