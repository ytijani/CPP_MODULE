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
    // }
    //     {
    //     try
    //     {
    //         Bureaucrat test("lolo", 1);
    //         Intern someRandomIntern;
    //         Form* ppf;
    //         ppf = someRandomIntern.makeForm("pardoned", "Bender");
    //         test.signForm(*ppf);
    //         test.executeForm(*ppf);
    //     }
    //     catch(std::exception &e)
    //     {
    //         std::cerr<<e.what()<<std::endl;
    
    //     }
    // }

    // {
    //     try
    //     {
    //         Bureaucrat test("lolo", 1);
    //         Intern someRandomIntern;
    //         Form* scf;
    //         scf = someRandomIntern.makeForm("ASCII trees", "Bender");
    //         test.signForm(*scf);
    //         test.executeForm(*scf);
    //     }
    //     catch(std::exception &e)
    //     {
    //         std::cerr<<e.what()<<std::endl;
    
    //     }
    // }
}