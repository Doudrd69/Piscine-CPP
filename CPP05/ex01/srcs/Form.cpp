#include "../includes/Form.hpp"

Form::Form() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {

    std::cout << "Form default constructor called" << std::endl;
    return ;
}

Form::Form(const std::string name, int grade) {

    if (grade > 0 && grade < 151) {
        this->_name = name;
        this->_gradeToSign = grade;
        this->_gradeToExec = grade;
        this->_isSigned = false;
    }
    else if (grade < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Form::GradeTooLowException();
    }
	return ;
}

Form::Form(const Form& obj) {

    *this = obj;
    return ;
}

Form&   Form::operator=(const Form& obj) {

    this->_name = obj.getName();
    this->_isSigned = obj.getIsSigned();
    this->_gradeToSign = obj.getGrade();
    this->_gradeToExec = obj.getGrade();
    return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Form& obj) {

	out << obj.getName() << ", form grade " << obj.getGrade();
	return (out); 
}


Form::~Form() {

    std::cout << "Form destructor called" << std::endl;
    return ;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Error code : 1";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Error code : 2";
}

void    Form::beSigned(Bureaucrat* bc) {

    if (bc->getGrade() <= this->_gradeToSign)
        this->_isSigned = true;
    else
        throw Form::GradeTooLowException();
    return ;
}

void    Form::signForm(Bureaucrat* bc) {

    if (this->_isSigned == true)
        std::cout << bc->getName() << " signed " << this->getName() << std::endl;
    else
        std::cout << bc->getName() << " couldn't sign " << this->getName() << " because grade is too low" << std::endl;
    return ;
}

void	Form::upGrade() {

	--this->_gradeToSign;
    --this->_gradeToExec;
	if (this->_gradeToSign < 1)
		throw Form::GradeTooHighException();		
	else
		std::cout << this->_name << " was promoted to grade " << this->_gradeToSign << std::endl;
	return ;
}

void	Form::downGrade() {

	++this->_gradeToSign;
    ++this->_gradeToExec;
	if (this->_gradeToSign > 150)
		throw Form::GradeTooLowException();		
	else
		std::cout << this->_name << "was promoted to grade " << this->_gradeToSign << std::endl;
	return ;
}

std::string  Form::getName() const {

    return (this->_name);
}

bool    Form::getIsSigned() const {

    return (this->_isSigned);
}

int Form::getGrade() const {

    return (this->_gradeToSign);
}