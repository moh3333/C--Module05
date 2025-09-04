#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm{

    private:
        std::string FileName;

    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();

        void        TakeAction() const ;

        
};



#endif