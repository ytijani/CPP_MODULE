#include "iter.hpp"

template<typename T>
void    print(T const &a)
{
    std::cout<<a<<std::endl;
}

int main()
{
    std::cout<<"type int "<<std::endl;

    int arr[] = {1,2,3,4,5,6};
    iter(arr, 6, print);

    std::cout<<"type string "<<std::endl;
    std::string name[] = {"name", "lolo", "teek", "bemo"};
    iter(name, 4, print);
}