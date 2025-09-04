#include "Intern.hpp"


Intern::Intern(){}

Intern::Intern(const Intern& other){
    (void) other;
}

Intern& Intern::operator=(const Intern& other){
    (void) other;
    return *this;
}

Intern::~Intern(){}

AForm *Intern::MakeShrubberyCreationForm(const std::string& Target){

    return new ShrubberyCreationForm(Target);
}
AForm *Intern::MakeRobotomyRequestForm(const std::string& Target){

    return new RobotomyRequestForm(Target);
}
AForm *Intern::MakePresidentialPardonForm(const std::string& Target){

    return new PresidentialPardonForm(Target);
}


AForm   *Intern::makeForm(std::string FormName, std::string Target){
    AForm *(Intern::*FormTypes[3])(const std::string&);
    AForm *ret = NULL;

    FormTypes[0] = &Intern::MakeShrubberyCreationForm;
    FormTypes[1] = &Intern::MakeRobotomyRequestForm;
    FormTypes[2] = &Intern::MakePresidentialPardonForm;
    
    std::string NameformStr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i;
    for (i = 0; i < 3; i++){
        if (FormName == NameformStr[i]){
            ret = ((this->*FormTypes[i])(Target));
            break ;
        }
    }
    std::cout << (i > 2 ? "the Form Type does not exist " : ("Intern creates " + Target)) << std::endl;
    return ret ;
}