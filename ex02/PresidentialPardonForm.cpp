#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5), Target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string name):AForm(name, 25, 5), Target(name){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):AForm(other), Target(other.Target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
    if (this != &other){
        this->AForm::operator=(other);
        Target = other.Target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void        PresidentialPardonForm::TakeAction() const{
    std::cout << Target + " has been pardoned by Zaphod Beeblebrox ." << std::endl;
}

