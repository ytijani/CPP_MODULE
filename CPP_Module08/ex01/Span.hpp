#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <deque>
#include <algorithm>
class Span
{
    private:
        unsigned int n;
        std::deque<int> B;
    public :
        Span();
        Span(unsigned int n);
        Span(const Span &e);
        Span &operator=(const Span &);
        void    addNumber(int n);
        void    print();
    
        int     shortestSpan();
        int     longestSpan();
        void    addAllNumber(int nb);
};

#endif