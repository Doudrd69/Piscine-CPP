#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"


std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);
std::ostream&   operator<<(std::ostream& out, const AForm* obj);


int main () {


    try
    {
        Bureaucrat	bc1("Palpatine", 42);
		Intern		randomIntern;
		AForm*		rrf;

		rrf = randomIntern.makeForm("robotomy request", "Anakin");
		std::cout << rrf << std::endl;

		bc1.executeForm(*rrf);
		rrf->beSigned(&bc1);
		rrf->execute(bc1);
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
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat grade is too low to sign/execute: " << e.what() << std::endl;
		return 1;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat grade is too high to sign/execute: " << e.what() << std::endl;
		return 2;
	}
	catch(AForm::RobotomyFailed &e)
	{
		std::cout << "Robotomy failed ! " << e.what() << std::endl;
		return 3;
	}
	catch(AForm::FormIsNotSigned &e)
	{
		std::cout << "/!\\ The form is not signed and can't be executed /!\\ : " << e.what() << std::endl;
		return 4;
	}
    return 0;
}
