#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat {

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

        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();

        void				signForm(Form* form);

        const std::string&	getName(void) const;
        int                 getGrade(void) const;

        void                upGrade();
        void                downGrade();

        private :

            const std::string   _name;
            int                 _grade;
};

#endif