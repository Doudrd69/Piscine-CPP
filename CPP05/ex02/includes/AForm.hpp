#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm {

    public :

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowToSignException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowToExecException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class FormIsNotSigned : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class RobotomyFailed : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        AForm();
        AForm(std::string target, int sign, int exec);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        virtual ~AForm();

        virtual void        execute(Bureaucrat const & executor) const = 0;
        void                beSigned(Bureaucrat* bc);

        const std::string&	getName() const;
        bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;

        void                setIsSigned(bool value);

        private :

            const std::string   _name;
            bool                _isSigned;
            const int           _gradeToSign;
            const int           _gradeToExec;
};

#endif