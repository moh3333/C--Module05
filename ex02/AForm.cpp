#include "AForm.hpp"


const char* AForm::GradeTooLowException::what() const throw(){
    return ("AForm : Grade too low exception!");
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("AForm : Grade too Hight exception!");
}

AForm::AForm():Name("Default"), isSigned(false), GradeToSign(150), GradeToExecute(150){

}

AForm::AForm(std::string name, const int GradeSign, const int ExecGrade):Name(name), isSigned(false) ,GradeToSign(GradeSign), GradeToExecute(ExecGrade){
    if (GradeSign > 150 || ExecGrade > 150)
        throw GradeTooLowException();
    if (GradeSign < 1 || ExecGrade < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm& F):Name(F.Name), isSigned(false) , GradeToSign(F.GradeToSign), GradeToExecute(F.GradeToExecute){}

AForm& AForm::operator=(const AForm& other){
    if (this != &other){
        this->isSigned = other.isSigned;
    }
    return *this;
}

AForm::~AForm(){}

const std::string&  AForm::getName() const{
    return Name;
}

bool  AForm::getisSigned(){
    return isSigned;
}

int   AForm::getGradeToSign(){
    return GradeToSign;
}

int   AForm::getGradeToExecute(){
    return GradeToExecute;
}

void        AForm::beSigned(Bureaucrat& Br){

    if (Br.getGrade() > this->GradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

std::ostream& operator<<(std::ostream& os, AForm& F){
    os << F.getName() <<  " | required GradeToSign " << F.getGradeToSign() <<  " | required GradeToExecute " << F.getGradeToExecute() << (F.getisSigned() == true ? " | Signed" : " | Not signed");
    return os;
}