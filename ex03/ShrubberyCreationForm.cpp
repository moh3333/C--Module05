#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137), FileName("DefaultFile"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name):AForm(name, 145, 137), FileName(name + "_shrubbery"){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):AForm(other), FileName(other.FileName){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    if (this != &other){
        this->AForm::operator=(other);
        FileName = other.FileName;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void        ShrubberyCreationForm::TakeAction() const {

    std::ofstream Outfile(this->FileName);
    for (int i(0); i < 3; i++){
        Outfile << "       /\\\n";
        Outfile << "      /**\\\n";
        Outfile << "     /****\\\n";
        Outfile << "    /******\\\n";
        Outfile << "   /********\\\n";
        Outfile << "  /**********\\\n";
        Outfile << " /************\\\n";
        Outfile << "/**************\\\n";
        Outfile << "      ||\n";
        Outfile << "      ||\n";
        Outfile << "      ||\n";
    }
}

