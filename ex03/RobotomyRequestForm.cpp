#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45), Target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string name):AForm("name", 72, 45), Target(name){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm(other), Target(other.Target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    if (this != &other){
        this->AForm::operator=(other);
        Target = other.Target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void        RobotomyRequestForm::TakeAction() const{
    std::cout << Target + " has been pardoned by Zaphod Beeblebrox ." << std::endl;
}

