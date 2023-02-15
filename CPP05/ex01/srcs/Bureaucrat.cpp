#include "../includes/Bureaucrat.hpp"

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

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error code : 1";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error code : 2";
}

void    Bureaucrat::signForm(Form* form) {

    if ((form->getIsSigned() == false) && (this->_grade <= form->getGrade()))
        form->beSigned(this);
    else
        std::cout << this->_name << " couldn't sign " << form->getName() << " because of grade too low" << std::endl;
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

const std::string&	Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}	