#include "../includes/Intern.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

Intern::Intern() {

    std::cout << "Intern created" << std::endl;
    return ;
}

Intern::Intern(const Intern& obj) {

    *this = obj;
    return ;
}

Intern&  Intern::operator=(const Intern& obj) {

    (void)obj;
    return (*this);
}

Intern::~Intern() {

    std::cout << "Intern destructor called" << std::endl;
    return ;
}

/***********************************************/
/*                 FUNCTIONS                   */
/***********************************************/

AForm*  Intern::makeForm(std::string name, std::string target) const {

    int formIndex = -1;

    std::string	strArray[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++) {
        if (name == strArray[i])
            formIndex = i;
    }

    std::cout << "Intern creates " << name << std::endl;
    switch (formIndex)
    {
        case 0:
            return (new ShrubberyCreationForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new PresidentialPardonForm(target));
        default:
            break;
    }
    if (formIndex == -1)
        throw AForm::InvalidFormRequest();
    return 0;
}