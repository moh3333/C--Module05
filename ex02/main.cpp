#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

    std::srand(time(NULL));
    std::cout << "\033[32m===== TEST SHRUBBERY CREATION ( NON VALID GRADE )(PRINT FORM INFOS, SIGN , EXECUTE) =====\033[0m\n";
    Bureaucrat hmza_cant("FIRST_BUREAUCRAT", 150);
    ShrubberyCreationForm shrub_cant("NOGARDEN");
    std::cout <<"BUREAUCRAT INFOS  :            "<< hmza_cant << std::endl;
    std::cout <<"FORM INFOS :            "<< shrub_cant << std::endl;
    hmza_cant.signForm(shrub_cant);
    hmza_cant.executeForm(shrub_cant);
    std::cout << "NO_FILE 'GARDEN_shrubbery' WILL BE CREATED .\n\n";



    std::cout << "\033[32m===== TEST SHRUBBERY CREATION ( VALID GRADE )(PRINT FORM INFOS, SIGN , EXECUTE) =====\033[0m\n";
    Bureaucrat hmza("FIRST_BUREAUCRAT", 1);
    ShrubberyCreationForm shrub("GARDEN");
    std::cout <<"BUREAUCRAT INFOS  :            "<< hmza_cant << std::endl;
    std::cout <<"FORM INFOS :            "<< shrub << std::endl;
    hmza.signForm(shrub);
    hmza.executeForm(shrub);
    std::cout << "CHECK FILE  'GARDEN_shrubbery' FOR ASCII TREES .\n\n";




    std::cout << "\033[32m===== TEST ROBOTOMY REQUEST (PRINT FORM INFOS, SIGN , EXECUTE) =====\033[0m\n";
    Bureaucrat ayub("SECEND_BUREAUCRAT", 40); 
    RobotomyRequestForm robot("robotm_");


    std::cout << "FORM INFOS :      " << robot << std::endl;
    ayub.signForm(robot);
    std::cout << "AFTER SIGNING FORM INFOS :      " << robot << "\n\n" << std::endl;
    for (int i = 0; i < 4; i++) {
        ayub.executeForm(robot);
        std::cout << std::endl;
    }


    std::cout << "\n\033[32m===== TEST PRESIDENTIAL PARDON (SIGN , EXECUTE )=====\033[0m\n";
    Bureaucrat president("THIRD_BUREAUCRAT", 1);
    PresidentialPardonForm pardon("PARDONNN");

    std::cout << "FORM INFOS :      " << pardon << std::endl;

    president.signForm(pardon);
    president.executeForm(pardon);

    std::cout << "\n\033[32m===== TEST EXCEPTIONS ()=====\033[0m\n";

    Bureaucrat low("FOURTH_BUREAUCRAT", 150);
    ShrubberyCreationForm shrub2("forest");

    low.executeForm(shrub2);

    low.signForm(shrub2);

  
    Bureaucrat mid("MidRank", 140); 
    mid.signForm(shrub2);
    mid.executeForm(shrub2);

    return 0;
}
