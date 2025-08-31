#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>


class Bureaucrat;

class AForm {
    private:
        const std::string   Name;
        bool                isSigned;
        const int           GradeToSign;
        const int           GradeToExecute;

    public:
        AForm();
        AForm(std::string name, const int SignGrade, const int ExecGrade);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

        class   GradeTooHighException: public std::exception {
            const char * what() const throw();
        };
        class   GradeTooLowException: public std::exception{
            const char * what() const throw();
        };

        const std::string&  getName() const;
        bool          getisSigned();
        int           getGradeToSign();
        int           getGradeToExecute();

        void        beSigned(Bureaucrat& Br);
        virtual void        execute(Bureaucrat const& executor) const = 0;
};   

std::ostream& operator<<(std::ostream& os, AForm& F);

#endif