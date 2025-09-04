#include "Intern.hpp"


int main() {
    std::srand(std::time(NULL)); // seed randomness for robotomy

    std::cout << "\033[32m===== TEST 1: INTERN CREATES SHRUBBERY =====\033[0m\n";
    Intern someIntern;
    AForm* shrub = someIntern.makeForm("shrubbery creation", "FIRST_FORM");
    if (shrub) {
        Bureaucrat boss("FIRST_BUREAUCRAT", 1);
        boss.signForm(*shrub);
        boss.executeForm(*shrub); // should create "Home_shrubbery"
        delete shrub;
    }
    std::cout << std::endl;


    std::cout << "\033[32m===== TEST 2: INTERN CREATES ROBOTOMY (SIGN AND EXECUTE)=====\033[0m\n";
    AForm* robo = someIntern.makeForm("robotomy request", "SECEND_FORM");
    std::cout << std::endl;
    if (robo) {
        Bureaucrat engineer("SECEND_BUREAUCRAT", 40);
        engineer.signForm(*robo);
        for (int i = 0; i < 4; i++){
            engineer.executeForm(*robo); // 50% success/fail
            std::cout << std::endl;
        }
        delete robo;
    }
    std::cout << std::endl;


    std::cout << "\033[32m===== TEST 3: INTERN CREATES PRESIDENTIAL PARDON (SIGN AND EXECUTE)=====\033[0m\n";
    AForm* pardon = someIntern.makeForm("presidential pardon", "THIRD_FORM");
    if (pardon) {
        Bureaucrat president("THIRD_BUREAUCRAT", 1);
        president.signForm(*pardon);
        president.executeForm(*pardon);
        delete pardon;
    }
    std::cout << std::endl;


    std::cout << "\033[32m===== TEST 4: INTERN CREATES UNKNOWN FORM =====\033[0m\n";
    AForm* unknown = someIntern.makeForm("coffee making", "UNKNOWN");
    if (!unknown)
        std::cout << "Intern could not create form 'coffee making'.\n";
    std::cout << std::endl;


    std::cout << "\033[32m===== TEST 5: MULTIPLE INTERNS, MULTIPLE FORMS =====\033[0m\n";
    Intern intern1, intern2;
    AForm* f1 = intern1.makeForm("shrubbery creation", "FOURTH_FORM");
    AForm* f2 = intern2.makeForm("robotomy request", "FIFTH_FORM");

    Bureaucrat admin("FOURTH_BUREAUCRAT", 1);
    if (f1) {
        admin.signForm(*f1);
        admin.executeForm(*f1);
        delete f1;
    }
    if (f2) {
        admin.signForm(*f2);
        admin.executeForm(*f2);
        delete f2;
    }
    std::cout << std::endl;

    return 0;
}
