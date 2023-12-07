#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
    private :
        std::stack<int> myStack;
    public :
        RPN();
        RPN(const RPN&);
        RPN&operator=(const RPN&);
        void    getLine(const std::string &); 
        void    rpn(const std::string &);
        void    pushValidNumber(const std::string &arg);

        bool    isValidNumber(const std::string &);
        int     calc(int &, int &, const std::string &);

        ~RPN();
};
#endif