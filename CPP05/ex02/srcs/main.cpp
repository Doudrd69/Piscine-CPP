#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"


std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);
std::ostream&   operator<<(std::ostream& out, const AForm* obj);


int main () {


    try
    {
        Bureaucrat	bc1("Palpatine", 42);
        Bureaucrat  bc2("Yoda", 149);
        AForm*		form1 = new PresidentialPardonForm("Obi-Wan");
        AForm*      form2 = new RobotomyRequestForm("Anakin");
        AForm*      form3 = new ShrubberyCreationForm("Naboo");
        std::cout << bc1 << std::endl;
        std::cout << bc2 << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
        std::cout << form3 << std::endl;

		bc1.signForm(*form3);
		bc1.executeForm(*form3);

		// form3->beSigned(&bc1);
		// form3->execute(bc1);
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
		std::cout << "Form grade is too low : " << e.what() << std::endl;
		return 1;
	}
	catch(AForm::GradeTooHighException &e)
	{
		std::cout << "Form grade is too high : " << e.what() << std::endl;
		return 2;
	}
	catch (AForm::GradeTooLowToSignException &e)
	{
		std::cout << "Form is too high for the bureaucrat to be signed : " << e.what() << std::endl;
		return 3;
	}
	catch (AForm::GradeTooLowToExecException &e)
	{
		std::cout << "Form is too high for the bureaucart to be executed : " << e.what() << std::endl;
		return (4);
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
    return 0;
}
