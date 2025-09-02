#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 72, 45), Target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string name):AForm(name, 72, 45), Target(name){}

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

    std::srand(time(NULL));
    std::cout << ((std::rand() % 2 == 0) ? ( "DRILLING NOISES ZZZZZZ\n" + Target + \
        " has been robotomized successfully " ) : "the robotomy failed" ) << std::endl;
}

