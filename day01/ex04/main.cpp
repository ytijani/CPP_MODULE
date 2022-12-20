#include "replace.hpp"

int main(int ac, char *av[])
{

    if(ac > 1)
    {
        sed op("abc", "lolo", "test");
        std::ifstream infile;
        std::ofstream outfile;
        std::string   s1;
        std::string   s2;
        std::string str;
        s1 = op.getfirststring();
        s2 = op.getsecondstring();
        infile.open("test");
        outfile.open(op.getfilename());
        if(!infile)
        {
            std::cout<<"infile not found"<<std::endl;
            exit(1);
        }
        while(std::getline(infile, str))
        {
            op.replacestring(str, s1, s2);
            outfile<< str<<std::endl;
        }
        infile.close();
    }
}
