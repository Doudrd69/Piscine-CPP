#include "../includes/RobotomyRequestForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

RobotomyRequestForm::RobotomyRequestForm() : AForm() {

    std::cout << "RRF default constructor called" << std::endl;

    setName("default");
    setIsSigned(false);
    setGradeToSign(72);
    setGradeToExec(45);
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target) {

    std::cout << "RRF constructor(string) called" << std::endl;
    setName("Robotomy Request Form");
    setTarget(target);
    setIsSigned(false);
    setGradeToSign(75);
    setGradeToExec(45);
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj) {

    *this = obj;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {

    setName(obj.getName());
    setTarget(obj.getTarget());
    setIsSigned(obj.getIsSigned());
    setGradeToSign(obj.getGradeToSign());
    setGradeToExec(obj.getGradeToExec());
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
            std::cout << "==> Target " << this->getTarget() << " has been successfully robotized." << std::endl;
        else
            throw AForm::RobotomyFailed();
    }
    else if (exec.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowToExecException();
    else
        throw AForm::FormIsNotSigned();
    return ;
}