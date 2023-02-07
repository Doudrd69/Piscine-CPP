#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"


std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);
std::ostream&   operator<<(std::ostream& out, const Form& obj);


int main () {


    try
    {
        Bureaucrat	test("Macron", 42);
        Form        form_1("Retraite", 42);
        std::cout << test << std::endl;
		std::cout << form_1 << std::endl;
       	test.upGrade();
        //test.downGrade();	
		form_1.upGrade();
		form_1.beSigned(&test);
		form_1.signForm(&test);
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
	catch(Form::GradeTooLowException &e)
	{
		std::cout << "Form grade is too low: " << e.what() << std::endl;
		return 1;
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cout << "Form grade is too high: " << e.what() << std::endl;
		return 2;
	}
    return 0;
}