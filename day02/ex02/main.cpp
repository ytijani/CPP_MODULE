#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;



    // Fixed t1;
    // Fixed t2;
    // Fixed t3;
    // Fixed t4;

    // t1 = 14;
    // t2 = 7;
    // t3 = 14;
    // t4 = 3;
    //arithmetic operators//

    // std::cout<<t1 + t2<<std::endl;
    // std::cout<<t1 - t2<<std::endl;
    // std::cout<<t1 * t2<<std::endl;
    // std::cout<<t1 / t2<<std::endl;
    // std::cout<<--t1<<std::endl;
    // std::cout<<t2--<<std::endl;
    // std::cout<<++(++t2)<<std::endl;
    // std::cout<<--(--t2)<<std::endl;

    //check comparison operator//
    // if (t1 > t2)
    //     std::cout<<"t1 > t2"<<std::endl;
    // if (t1 > t2)
    //     std::cout<<"t1 < t2"<<std::endl;
    // if (t3 == t3)
    //     std::cout<<"t1 == t3"<<std::endl;
    // if (t1 != t2)
    //     std::cout<<"t1 != t2"<<std::endl;

    // std::cout << Fixed::max(t1, t2) << std::endl;
    // std::cout<< Fixed::min(t1, t2)<<std::endl;

    //t4 = t2 = t4;
    return (0);
}