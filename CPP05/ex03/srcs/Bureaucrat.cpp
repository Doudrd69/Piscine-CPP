#include "../includes/Bureaucrat.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

Bureaucrat::Bureaucrat() : _name("default"), _grade(0) {

    std::cout << "Bureaucrat default constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

    std::cout << "Bureaucrat constructor(string, int) called" << std::endl;
	this->_grade = grade;
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
	    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {

    this->_grade = obj.getGrade();
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {

    this->_grade = obj.getGrade();
    return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj) {

	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out); 
}

Bureaucrat::~Bureaucrat() {

	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

/***********************************************/
/*                 FUNCTIONS                   */
/***********************************************/

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error code : 1";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error code : 2";
}

const char *Bureaucrat::GradeTooLowToSignException::what() const throw()
{
    return "Error code : 3";
}

const char *Bureaucrat::GradeTooLowToExecException::what() const throw()
{
    return "Error code : 4";
}

void    Bureaucrat::signForm( AForm& form) {

    if (this->_grade <= form.getGradeToSign())
        form.beSigned(this);
    else
        throw Bureaucrat::GradeTooLowToSignException();
}

void    Bureaucrat::executeForm(const AForm& form) {

    if ((this->_grade <= form.getGradeToExec()) && (form.getIsSigned() == true))
        form.execute(*this);
    else if (this->_grade > form.getGradeToExec())
        throw Bureaucrat::GradeTooLowToExecException();
    else
        throw AForm::FormIsNotSigned();
    return ;
}

void	Bureaucrat::upGrade() {

	--this->_grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();		
	else
		std::cout << this->_name << " was promoted to grade " << this->_grade << std::endl;
	return ;
}

void	Bureaucrat::downGrade() {

	++this->_grade;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();		
	else
		std::cout << this->_name << "was promoted to grade " << this->_grade << std::endl;
	return ;
}

/***********************************************/
/*                 ACCESSORS                   */
/***********************************************/

const std::string&	Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}	