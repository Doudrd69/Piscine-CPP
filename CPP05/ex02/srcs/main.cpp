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
       	//bc1.upGrade();
        //test.downGrade();	
        // form1->beSigned(&bc1);
		// form1->execute(bc1);
		// form2->beSigned(&bc2);
		// form2->execute(bc2);
        bc2.executeForm(*form3);
    	form3->beSigned(&bc1);
		form3->execute(bc1);
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
