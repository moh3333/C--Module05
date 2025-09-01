// main.cpp - Test file for Exercise 02
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

int main () {

   try {
        ShrubberyCreationForm shrub("garden");
        Bureaucrat Br("Smia", 1);
        Br.signForm(shrub);
        Br.executeForm(shrub);
        // std::cout << shrub << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}