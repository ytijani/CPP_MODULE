#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN & opt)
{
    *this = opt;
}

RPN & RPN::operator=(const RPN &opt)
{
    (void)opt;
    return (*this);
}

bool    RPN::isValidNumber(const std::string &arg)
{
    for(size_t i = 0; i < arg.size(); i++)
    {
        if(isdigit(arg[i]) == 0)
            return false;
    }
    return true;
}

void    RPN::pushValidNumber(const std::string &arg)
{
    long res = atol(arg.c_str());
    if(res > 10)
        throw "Error";
    else
        myStack.push(res);
}

int     RPN::calc(int &val, int &val2, const std::string &arg)
{
    if(arg == "*")
        return (val * val2);
    else if(arg == "+")
        return (val + val2);
    else if(arg == "-")
        return (val - val2);
    if(val2 == 0)
        throw "Error: division by zero.";
    return (val / val2);
}

void    RPN::rpn(const std::string &arg)
{
    std::string op = "+-/*";
    if(op.find(arg) == std::string::npos)
    {
        if(isValidNumber(arg))
            return  pushValidNumber(arg);
        throw ("Error");
    }
    else
    {
        int val = 0, val2 = 0;
        if(myStack.size() > 1)
        {
            val = myStack.top();
            myStack.pop();
        }
        if(myStack.size() > 0)
        {
            val2 = myStack.top();
            myStack.pop();
            myStack.push(calc(val2, val, arg));
        }
    }
}

void    RPN::getLine(const std::string &arr)
{
    size_t find = arr.find_first_not_of(" ");
    size_t found;
    while(find != std::string::npos)
    {
        found = arr.find_first_of(" ", find);
        rpn(arr.substr(find, found - find));
        find = arr.find_first_not_of(" ", found); 
    }
    if(myStack.size() != 1)
        throw "Error";
    std::cout<<myStack.top()<<std::endl;
}

RPN::~RPN()
{

}