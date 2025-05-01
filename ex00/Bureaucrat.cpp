#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name(){

}

Bureaucrat::~Bureaucrat(){

}

const std::string& Bureaucrat::getName() const {

}

double Bureaucrat::getGrade(){

}

void Bureaucrat::incrementGrade(){

}

void Bureaucrat::decrementGrade(){

}

void Bureaucrat::GradeTooHighException(){

}

void Bureaucrat::GradeTooLowException(){

}

std::ostream& Bureaucrat::operator<<(std::ostream& os){
    os << getName() << ", bureaucrat grade " << getGrade() << "\n";
    return (os);
}