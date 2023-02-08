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

		rrf->beSigned(&bc1);
		rrf->execute(bc1);

		// bc1.signForm(*rrf);
		// bc1.executeForm(*rrf);
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
	catch (Bureaucrat::GradeTooLowToSignException &e)
	{
		std::cout << "Bureaucrat grade is too low to sign : " << e.what() << std::endl;
		return 3;
	}
	catch (Bureaucrat::GradeTooLowToExecException &e)
	{
		std::cout << "Bureaucrat grade is too low to execute : " << e.what() << std::endl;
		return 4;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat grade is too low: " << e.what() << std::endl;
		return 1;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat grade is too high : " << e.what() << std::endl;
		return 2;
	}
	catch (AForm::GradeTooLowToSignException &e)
	{
		std::cout << "Form grade is to high for bureaucrat to be signed : " << e.what() << std::endl;
		return 3;
	}
	catch (AForm::GradeTooLowToExecException &e)
	{
		std::cout << "Form grade is to high for bureaucrat to be executed : " << e.what() << std::endl;
		return 4;
	}
	catch(AForm::FormIsNotSigned &e)
	{
		std::cout << "/!\\ The form is not signed and can't be executed /!\\ : " << e.what() << std::endl;
		return 5;
	}
	catch(AForm::RobotomyFailed &e)
	{
		std::cout << "Robotomy failed ! " << e.what() << std::endl;
		return 6;
	}
	catch (AForm::InvalidFormRequest &e)
	{
		std::cout << "Invalid form request : " << e.what() << std::endl;
		std::cout << "Valid forms are : shrubberry creation / robotomy request / presidential pardon" << std::endl;
		return 7;
	}
    return 0;
}
