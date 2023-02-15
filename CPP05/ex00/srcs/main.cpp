#include "../includes/Bureaucrat.hpp"

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);

int main () {

    try
    {
        Bureaucrat test("Palpatine", 140);
        std::cout << test << std::endl;
        test.downGrade();
        std::cout << test << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout << "Grade is too low: " << e.what() << std::endl;
        return 1;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Grade is too high: " << e.what() << std::endl;
        return 2;
    }
    return 0;
}