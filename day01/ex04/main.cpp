#include "replace.hpp"

int main(int ac, char *av[])
{

    if(ac > 1)
    {
        sed op(av[2], av[3], av[1]);
        std::ifstream infile;
        std::ofstream outfile;
        std::string str;
        infile.open(av[1]);
        try(outfile.open(op.getfilename()));
        catch()
        {
            
        }
        while(std::getline(infile, str))
        {
            op.replacestring(str, op.getfirststring(), op.getsecondstring());
            outfile << str<<std::endl;
        }
        infile.close();
        outfile.close();
    }
    else
        std::cout<<"invalid arg"<<std::endl;
}
