#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotomyRequestForm : public AForm{

    private:
        std::string Target;

    public:

        RobotomyRequestForm();
        RobotomyRequestForm(const std::string name);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();

        void        TakeAction() const ;

        
};

#endif