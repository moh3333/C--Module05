#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string   Name;
        bool                isSigned;
        const int           GradeToSign;
        const int           GradeToExecute;

    public:
        Form();
        Form(std::string name, const int SignGrade, const int ExecGrade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        class   GradeTooHighException: public std::exception {
            const char * what() const throw();
        };
        class   GradeTooLowException: public std::exception{
            const char * what() const throw();
        };

        const std::string&  getName() const;
        bool                getisSigned() const;
        int                 getGradeToSign() const;
        int                 getGradeToExecute() const;

        void                beSigned(Bureaucrat& Br);
};   

std::ostream& operator<<(std::ostream& os, Form& F);

#endif