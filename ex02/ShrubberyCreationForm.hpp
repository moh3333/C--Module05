#ifndef SHRUBBERYCREATIOHFORM_HPP
#define SHRUBBERYCREATIOHFORM_HPP

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm{

    private:
        std::string FileName;

    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm(Const std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();

};



#endif