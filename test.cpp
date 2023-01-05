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
    const int &a = new int;
}