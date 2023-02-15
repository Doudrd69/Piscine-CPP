#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

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
        
        Form();
        Form(const std::string name, int grade);
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        ~Form();

        void    beSigned(Bureaucrat* bc);

        std::string     	getName() const;
        bool				getIsSigned() const;
		int					getGrade() const;


        void                upGrade();
        void                downGrade();

        private :

            const std::string   _name;
            bool                _isSigned;
            int                 _gradeToSign;
            int                 _gradeToExec;
};

#endif