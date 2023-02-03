#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(0) {

    std::cout << "Bureaucrat default constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {

    std::cout << "Bureaucrat constructor(string, int) called" << std::endl;
	this->_grade = grade;
    if (grade > 0 && grade < 151) {
        this->_name = name;
    }
    else if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
	return ;
}
	

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {

    *this = obj;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {

    this->_name = obj.getName();
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

void	Bureaucrat::upGrade() {

	try
	{
		--this->_grade;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();		
		else
			std::cout << this->_name << "was promoted to grade " << this->_grade << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Grade is too high: "<< this->_grade << " : " << e.what() << std::endl;
	}
}

void	Bureaucrat::downGrade() {


	try
	{
		++this->_grade;
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();		
		else
			std::cout << this->_name << "was promoted to grade " << this->_grade << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Grade is too low: "<< this->_grade << " : " << e.what() << std::endl;
	}
}

const std::string&	Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}