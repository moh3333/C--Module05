#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat {
    const std::string Name;
    double Grade;
public:
    Bureaucrat();
    ~Bureaucrat();

    const std::string& getName() const ;
    double getGrade();
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception{
        
    };
    void GradeTooLowException();
    std::ostream& operator<<(std::ostream& os);
};

#endif