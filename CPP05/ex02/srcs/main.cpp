#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"


std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);
std::ostream&   operator<<(std::ostream& out, const AForm* obj);


int main () {


    try
    {
        Bureaucrat	test("Macron", 5);
        AForm*		form1 = new PresidentialPardonForm("issou");
        AForm*      form2 = new RobotomyRequestForm("Anakin");
        std::cout << test << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
       	test.upGrade();
        //test.downGrade();	
        form1->beSigned(&test);
		form1->execute(test);
		form2->beSigned(&test);
		form2->execute(test);
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
		std::cout << "Robotomy failed !" << e.what() << std::endl;
		return 3;
	}
    return 0;
}

//class Form --> AForm (abstract)
    //attributs restent prives
    //AForm(name, target) ?

//les classes suivantes prennent en parametre
//dans leur constructeur la <target> du formulaire

//class concrete SCF
    //gradeS = 145 / gradeE = 137
    //creer un fichier avec <target>_shrubbery

//class concrete PPF
    //gradeS = 25 / gradeE = 5
    //informe que <target> a ete pardonee
    //PPF(name, target) ?