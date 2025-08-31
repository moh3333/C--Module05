#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Aform("ShrubberyCreationForm", 145, 137), FileName("DefaultFile"){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name):FileName(nanme + "_shrubbery"){

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
