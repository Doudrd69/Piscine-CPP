#include "../includes/RobotomyRequestForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 75, 45) {

    std::cout << "RRF default constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 75, 45), _target(target) {

    std::cout << "RRF constructor(string) called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), _target(obj._target) {

    std::cout << "RRF copy constructor" << std::endl;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {

    this->_target = obj._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

    std::cout << "RRF destructor called" << std::endl;
    return ;
}

/***********************************************/
/*                 FUNCTIONS                   */
/***********************************************/

void    RobotomyRequestForm::execute(const Bureaucrat& exec) const {

    if ((exec.getGrade() <= this->getGradeToExec()) && this->getIsSigned() == true)
    {
        std::cout << exec.getName() << " execute " << this->getName() << " : ";
        std::cout << "Brrrrrrrrzzzzzzzzzzzzzzz" << std::endl;
        srand(time(0));
        int success = rand() % 100 + 1;
        if (success <= 50)
            std::cout << "==> Target " << this->_target << " has been successfully robotized." << std::endl;
        else
            throw AForm::RobotomyFailed();
    }
    else if (exec.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else
        throw AForm::FormIsNotSigned();
    return ;
}