#include "Form.hpp"


const char* Form::GradeTooLowException::what() const throw(){
    return ("Form : Grade too low exception!");
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Form : Grade too High exception!");
}

Form::Form():Name("Default"), isSigned(false), GradeToSign(150), GradeToExecute(150){

}

Form::Form(std::string name, const int GradeSign, const int ExecGrade):Name(name), isSigned(false) ,GradeToSign(GradeSign), GradeToExecute(ExecGrade){
    if (GradeSign > 150 || ExecGrade > 150)
        throw GradeTooLowException();
    if (GradeSign < 1 || ExecGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form& F):Name(F.Name), isSigned(F.isSigned) , GradeToSign(F.GradeToSign), GradeToExecute(F.GradeToExecute){}

Form& Form::operator=(const Form& other){
    if (this != &other){
        this->isSigned = other.isSigned;
    }
    return *this;
}

Form::~Form(){}

const std::string&  Form::getName() const{
    return Name;
}

bool  Form::getisSigned() const{
    return isSigned;
}

int   Form::getGradeToSign() const{
    return GradeToSign;
}

int   Form::getGradeToExecute() const{
    return GradeToExecute;
}

void        Form::beSigned(Bureaucrat& Br){

    if (Br.getGrade() > this->GradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

std::ostream& operator<<(std::ostream& os, Form& F){
    os << F.getName() <<  " | required GradeToSign " << F.getGradeToSign() <<  " | required GradeToExecute " << F.getGradeToExecute() << (F.getisSigned() == true ? " | Signed" : " | Not signed");
    return os;
}