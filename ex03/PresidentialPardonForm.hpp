#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"


class PresidentialPardonForm : public AForm{

    private:
        std::string Target;

    public:

        PresidentialPardonForm();
        PresidentialPardonForm(const std::string name);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        void        TakeAction() const ;

        
};

#endif