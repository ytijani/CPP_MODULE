#include "Bureaucrat.hpp"
#include "Intern.hpp"
int main()
{
    {
        try
        {
            Bureaucrat test("lolo", 20);
            Intern someRandomIntern;
            Form* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            test.signForm(*rrf);
            test.executeForm(*rrf);
        }
        catch(std::exception &e)
        {
            std::cerr<<e.what()<<std::endl;
    
        }

    }
}