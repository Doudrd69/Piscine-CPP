#include "../includes/ShrubberyCreationForm.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {

    std::cout << "SCF default constructor called" << std::endl;

    setName("default");
    setIsSigned(false);
    setGradeToSign(145);
    setGradeToExec(137);
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target) {

    std::cout << "SCF constructor(string) called" << std::endl;
    setName("Shrubbery Creation Form");
    setTarget(target);
    setIsSigned(false);
    setGradeToSign(145);
    setGradeToExec(137);
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj) {

    *this = obj;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {

    setName(obj.getName());
    setTarget(obj.getTarget());
    setIsSigned(obj.getIsSigned());
    setGradeToSign(obj.getGradeToSign());
    setGradeToExec(obj.getGradeToExec());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

    std::cout << "SCF destructor called" << std::endl;
    return ;
}

/***********************************************/
/*                 FUNCTIONS                   */
/***********************************************/

void writeTree(std::ofstream &outfile) {

outfile << "                                 .         ;              \n"  
        <<  "      .              .              ;%                   \n"   
        <<  "        ,           ,                :;%  %;             \n"   
        <<  "         :         ;                   :;%;/     .,      \n"   
        <<  ",.        %;     %;            ;        %;/    ,;        \n"
        <<  "  ;       ;%;  %%;        ,     %;    ;%;    ,%/         \n"
        <<  "   %;       %;%;      ,  ;       %;  ;%;   ,%;/          \n"
        <<  "    ;%;      %;        ;%;        % ;%;  ,%;/            \n"
        <<  "     `%;.     ;%;     %;/         `;%%;.%;/              \n"
        <<  "      `:;%.    ;%%. %@;        %; ;@%;%/                 \n"
        <<  "         `:%;.  :;bd%;          %;@%;/                   \n"
        <<  "           `@%:.  :;%.         ;@@%;/                    \n"
        <<  "             `@%.  `;@%.      ;@@%;                      \n"         
        <<  "               `@%%. `@%%    ;@@%;                       \n"        
        <<  "                 ;@%. :@%%  %@@%;                        \n"       
        <<  "                   %@bd%%%bd%%:;                         \n"     
        <<  "                     #@%%%%%:;;                          \n"
        <<  "                     %@@%%%::;                           \n"
        <<  "                     %@@@%(o);  .                        \n"         
        <<  "                     %@@@o%;:(.,                         \n"         
        <<  "                 `.. %@@@o%::;                           \n"         
        <<  "                    `)@@@o%::;                           \n"         
        <<  "                     %@@(o)::;                           \n"        
        <<  "                    .%@@@@%::;                           \n"         
        <<  "                    ;%@@@@%::;.                          \n"          
        <<  "                   ;%@@@@%%:;;;.                         \n" 
        <<  "               ...;%@@@@@%%:;;;;,..                      \n";
}

void    ShrubberyCreationForm::execute(const Bureaucrat& exec) const {

    std::ofstream   outfile;
    std::string     tmp = this->getTarget();
    if ((exec.getGrade() <= this->getGradeToExec()) && this->getIsSigned() == true)
    {
        tmp.append("_shrubbery");
        std::cout << exec.getName() << " execute " << this->getName() << std::endl;
        outfile.open(tmp.c_str());
        if (!outfile.is_open())
        {
            std::cout << "Failed top open " << tmp << std::endl;
            return ;
        }
        writeTree(outfile);
        outfile.close();
    }
    else if (exec.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else
        throw AForm::FormIsNotSigned();
    return ;
}
