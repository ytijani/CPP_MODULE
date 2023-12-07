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
        outfile.open(op.getfilename());
        if(!infile)
        {
            std::cout<<"infile not found"<<std::endl;
            return (0);
        }
        while(std::getline(infile, str))
        {
            std::string newstr = op.replacestring(str, op.getfirststring(), op.getsecondstring());
            outfile << newstr;
            if (!infile.eof())
                outfile << std::endl;
        }
        infile.close();
        outfile.close();
    }
    else
        std::cout<<"invalid arg"<<std::endl;

        
}
