#include "../includes/AForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

AForm::AForm() : _name("default"), _target("default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {

    std::cout << "Form default constructor called" << std::endl;
    return ;
}

AForm::AForm(const std::string target) {

    std::cout << "AForm constructor(string) called" << std::endl;
    this->_name = "default form";
    this->_target = target;
    this->_isSigned = false;
	return ;
}

AForm::AForm(const AForm& obj) {

    *this = obj;
    return ;
}

AForm&   AForm::operator=(const AForm& obj) {

    this->_name = obj.getName();
    this->_isSigned = obj.getIsSigned();
    this->_gradeToSign = obj.getGradeToSign();
    this->_gradeToExec = obj.getGradeToExec();
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

void	AForm::upGrade() {

	--this->_gradeToSign;
    --this->_gradeToExec;
	if (this->_gradeToSign < 1)
		throw AForm::GradeTooHighException();		
	else
		std::cout << this->_name << " was promoted to grade " << this->_gradeToSign << std::endl;
	return ;
}

void	AForm::downGrade() {

	++this->_gradeToSign;
    ++this->_gradeToExec;
	if (this->_gradeToSign > 150)
		throw AForm::GradeTooLowException();		
	else
		std::cout << this->_name << "was promoted to grade " << this->_gradeToSign << std::endl;
	return ;
}

/***********************************************/
/*                 ACCESSORS                   */
/***********************************************/

std::string  AForm::getName() const {

    return (this->_name);
}

std::string  AForm::getTarget() const {

    return (this->_target);
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

void    AForm::setName(std::string value) {

    this->_name = value;
    return ;
}

void    AForm::setTarget(std::string value) {

    this->_target = value;
    return ;
}

void    AForm::setIsSigned(bool value) {

    this->_isSigned = value;
    return ;
}

void    AForm::setGradeToSign(int value) {

    this->_gradeToSign = value;
    return ;
}

void    AForm::setGradeToExec(int value) {

    this->_gradeToExec = value;
    return ;
}