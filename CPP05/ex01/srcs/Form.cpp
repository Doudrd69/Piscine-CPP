#include "../includes/Form.hpp"

Form::Form() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {

    std::cout << "Form default constructor called" << std::endl;
    return ;
}

Form::Form(std::string name, int grade) {

    if (grade > 0 && grade < 151) {
        this->_name = name;
        this->_gradeToSign = grade;
        this->gradeToExec = grade;
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

    this->_name = getName();
    this->_isSigned = getIsSigned();
    this->_gradeToSign = getGrade();
    this->_gradeToExec = getName();
    return (this);
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

    (void)bc;
    return ;
}