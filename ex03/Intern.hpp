#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {
    public :
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();


        AForm *MakeShrubberyCreationForm(const std::string& Target);
        AForm *MakeRobotomyRequestForm(const std::string& Target);
        AForm *MakePresidentialPardonForm(const std::string& Target);


        AForm   *makeForm(std::string FormName, std::string Target);
};


#endif