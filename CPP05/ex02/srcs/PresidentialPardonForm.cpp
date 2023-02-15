#include "../includes/PresidentialPardonForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {

    std::cout << "PPF default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {

    std::cout << "PPF constructor(string) called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), _target(obj._target) {

    std::cout << "PPF copy constructor" << std::endl;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {

    this->_target = obj._target;
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
        std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
    }
    else if (exec.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else
        throw AForm::FormIsNotSigned();
    return ;
}