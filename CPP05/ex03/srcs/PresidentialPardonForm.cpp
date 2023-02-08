#include "../includes/PresidentialPardonForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

PresidentialPardonForm::PresidentialPardonForm() : AForm() {

    std::cout << "PPF default constructor called" << std::endl;

    setName("default");
    setIsSigned(false);
    setGradeToSign(25);
    setGradeToExec(5);
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target) {

    std::cout << "PPF constructor(string) called" << std::endl;
    setName("Presidential Pardon Form");
    setTarget(target);
    setIsSigned(false);
    setGradeToSign(25);
    setGradeToExec(5);
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj) {

    *this = obj;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {

    setName(obj.getName());
    setTarget(obj.getTarget());
    setIsSigned(obj.getIsSigned());
    setGradeToSign(obj.getGradeToSign());
    setGradeToExec(obj.getGradeToExec());
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

    std::cout << "PPF destructor called" << std::endl;
    return ;
}

/***********************************************/
/*                 FUNCTIONS                   */
/***********************************************/

void    PresidentialPardonForm::execute(const Bureaucrat& exec) const {

    if ((exec.getGrade() <= this->getGradeToExec()) && this->getIsSigned() == true)
    {
        std::cout << exec.getName() << " execute " << this->getName() << " : ";
        std::cout << this->getTarget() << " was forgiven by Zaphod Beeblebrox" << std::endl;
    }
    else if (exec.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowToExecException();
    else
        throw AForm::FormIsNotSigned();
    return ;
}