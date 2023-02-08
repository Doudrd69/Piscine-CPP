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

        class InvalidFormRequest : public std::exception
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
        AForm(const std::string target);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        virtual ~AForm();

        virtual void        execute(Bureaucrat const & executor) const = 0;
        virtual void        beSigned(Bureaucrat* bc);

        void                upGrade();
        void                downGrade();

        std::string     	getName() const;
        std::string         getTarget() const;
        bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;

        void                setName(std::string value);
        void                setTarget(std::string value);
        void                setIsSigned(bool value);
        void                setGradeToSign(int value);
        void                setGradeToExec(int value);


        private :

            std::string         _name;
            std::string         _target;
            bool                _isSigned;
            int                 _gradeToSign;
            int                 _gradeToExec;
};

#endif