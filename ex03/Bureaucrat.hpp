#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    const std::string Name;
    int Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name , int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();

    const std::string& getName() const ;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception{ 
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception{
        const char* what() const throw();
    };

    void signForm(AForm& F);
    void    executeForm(AForm const& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& objct);

#endif
