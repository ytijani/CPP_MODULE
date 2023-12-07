#include "Span.hpp"


Span::Span():n(0)
{

}

Span::Span(unsigned int n):n(n)
{

}

void    Span::addNumber(int nb)
{
    if (B.size() == this->n)
        throw "You can't add this Element";
    B.push_front(nb);
}

Span::Span(Span const& obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    if(this != &obj)
    {
        this->n = obj.n;
        this->B = obj.B;
    }
    return (*this);
}

void    Span::print()
{
    std::deque<int>::iterator it = B.begin();
    for(; it != B.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
}

int Span::shortestSpan()
{
    std::deque<int> a(B);
    if (a.empty() || a.size() < 2)
        throw "Error : You Should add more Element";
    sort(a.begin(), a.end());
    std::deque<int>::iterator it = a.begin();
    int min = *(it + 1) - (*it);
    int tmp = 0;
    it++;
    for(; (it + 1)!= a.end(); it++)
    {
        tmp = *(it + 1) - (*it);
        if (tmp < min)
            min = tmp;
    }
    return (min);
}

int     Span::longestSpan()
{
    std::deque<int> a(B);
    if (a.empty())
        throw "Empty Span";
    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());
    return (max - min);
}

void    Span::addAllNumber(int nb)
{
    if (nb < 0)
        return ;
    std::srand(time(NULL));
    for(int i = 0; i < nb; i++)
    {
        if (B.size() == n)
            throw "Your Can't add this Element";
        int x = std::rand();
        B.push_front(x);
    }
}