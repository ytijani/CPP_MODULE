#include <iostream>


class demo{
    int data1, data2;
    public:
        void    display()
        {
            std::cout<<"lolo";
        }
        void    getvalues(int a, int b);
};

void    Allocate(int *A, int n)
{
    A = new int [n];
    for(int i = 0; i < n; i++)
        A[i] = 0;
}


int main()
{
    void(demo::*ptr)() = &demo::display;
    std::cout<<sizeof(ptr)<<std::endl;
}