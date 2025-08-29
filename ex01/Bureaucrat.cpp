#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat():Name ("Default_name"), Grade(150){}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
        this->Grade = other.Grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
    
    if (this != &other){
        this->Grade = other.Grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade):Name (name){
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    Grade = grade;
}

Bureaucrat::~Bureaucrat(){

}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Bureaucrat : Grade too low exception!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Bureaucrat : Grade too Hight exception!");
}
const std::string& Bureaucrat::getName() const {
    return (Name);
}

int Bureaucrat::getGrade() const{
    return (Grade);
}

void Bureaucrat::incrementGrade(){
    if (Grade - 1 < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(){
    if (Grade + 1 > 150)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& e){
    os << e.getName() << ", bureaucrat grade " << e.getGrade() << std::endl;
    return (os);
}

void Bureaucrat::signForm(Form& F){
    try {
        F.beSigned(*this);
        std::cout <<  this->Name <<  " signed " <<  F.getName() << std::endl;
    }

    catch (const std::exception& e){
        std::cout << this->Name << " couldn’t sign "  << F.getName() << " because " << e.what() << std::endl;
    }
}