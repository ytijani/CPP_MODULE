#include <iostream>


// class demo{
//     int data1, data2;
//     public:
//         void    display();
//         void    getvalues(int a, int b)
//         {
            
//         }
// };

void    Allocate(int *A, int n)
{
    A = new int [n];
    for(int i = 0; i < n; i++)
        A[i] = 0;
}

int main()
{
    int n;

    std::cin>>n;
    int A[n];

    A[0] = 1;
    std::cout<<A[0]<<std::endl;    
}