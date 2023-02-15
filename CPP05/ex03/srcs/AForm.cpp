#include "../includes/AForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

AForm::AForm() : _name("default"),  _isSigned(false), _gradeToSign(150), _gradeToExec(150) {

    std::cout << "Form default constructor called" << std::endl;
    return ;
}

AForm::AForm(std::string name, int sign, int exec) : _name(name), _isSigned(false), _gradeToSign(sign), _gradeToExec(exec) {

    std::cout << "AForm constructor(string) called" << std::endl;
	return ;
}

AForm::AForm(const AForm& obj) : _name(obj.getName()), _isSigned(false), _gradeToSign(obj.getGradeToSign()), _gradeToExec(obj.getGradeToExec()) {

    std::cout << "AForm copy constructor" << std::endl;
    return ;
}

AForm&   AForm::operator=(const AForm& obj) {

    this->_isSigned = obj.getIsSigned();
    return (*this);
}

std::ostream&	operator<<(std::ostream& out, const AForm* obj) {

	out << obj->getName() << " --> grade to sign : " << obj->getGradeToSign();
    out << " / grade to exec : " << obj->getGradeToExec();  
    return (out); 
}

AForm::~AForm() {

    std::cout << "Form destructor called" << std::endl;
    return ;
}

/***********************************************/
/*                 FUNCTIONS                   */
/***********************************************/

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Error code : 1";
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Error code : 2";
}

const char *AForm::GradeTooLowToSignException::what() const throw()
{
    return "Error code : 3";
}

const char *AForm::GradeTooLowToExecException::what() const throw()
{
    return "Error code : 3";
}

const char *AForm::FormIsNotSigned::what() const throw()
{
    return "Error code : 5";
}


const char *AForm::RobotomyFailed::what() const throw()
{
    return "Error code : 6";
}

const char *AForm::InvalidFormRequest::what() const throw()
{
    return "Error code : 7";
}

void    AForm::beSigned(Bureaucrat* bc) {

    if ((bc->getGrade() <= this->_gradeToSign) && (this->_isSigned == false))
    {
        std::cout << bc->getName() << " signed " << this->_name << std::endl;
        this->_isSigned = true;
    }
    else if (bc->getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    else
        std::cout << "Form is already signed !" << std::endl;
    return ;
}

/***********************************************/
/*                 ACCESSORS                   */
/***********************************************/

const std::string&  AForm::getName() const {

    return (this->_name);
}

bool    AForm::getIsSigned() const {

    return (this->_isSigned);
}

int AForm::getGradeToSign() const {

    return (this->_gradeToSign);
}

int AForm::getGradeToExec() const {

    return (this->_gradeToExec);
}

void    AForm::setIsSigned(bool value) {

    this->_isSigned = value;
    return ;
}