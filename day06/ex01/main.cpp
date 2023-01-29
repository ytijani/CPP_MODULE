#include "Serialization.hpp"

int main()
{
    Data *p = new Data;
    p->x = 10;
    p->c =  'a';
    uintptr_t t = serialize(p);
    std::cout<<"value of t : "<<t<<std::endl;
    int *ok = reinterpret_cast<int*>(t);
    std::cout<<"int : "<<*ok<<std::endl;
    ok++;
    char *c = reinterpret_cast<char *>(ok);
    std::cout<<"char : "<<*c<<std::endl;
    Data *res = new Data;
    res = deserialize(t);
    std::cout<<"after deserialize : "<<res->x<<std::endl;
    std::cout<<"after deserialize : "<<res->c<<std::endl;
    delete p;
}