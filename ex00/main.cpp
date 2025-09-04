#include "Bureaucrat.hpp"

int main(){
    std::cout <<  "\033[32m" << "TESTING WITH DEFAULT" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    Bureaucrat a;
    std::cout << "BUREAUCRATE INFOS   :        " << a << std::endl;

    std::cout <<  "\033[32m" << "\nTESTING WITH VALID GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    Bureaucrat d("howa", 15);
    std::cout  << "BUREAUCRATE INFOS   :        " << d << std::endl;

    std::cout <<  "\033[32m" << "\nTESTING WITH TOO HIGHT GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    try{
        Bureaucrat b("sofian", 0);
    }

    catch(const std::exception& e){
        std::cout << "EXCEPTION :     " << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }


    std::cout <<  "\033[32m" << "\nTESTING WITH TOO LOW GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    try{
        Bureaucrat c("hamza", 154);
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION :     " << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }

    std::cout << "\n\033[32mTESTING INCREMENT & DECREMENT\033[0m\n";
    Bureaucrat x("mohamd", 2);
    std::cout << "BUREAUCRATE INFOS   :        "<< x << std::endl;
    try {
        x.incrementGrade();
        std::cout << "AFTER INCREMENT :        " << x << std::endl;
        std::cout << "ANOTHER TRY TO INCREMENT WILL THORW EXCEPTION   " << std::endl;
        x.incrementGrade();
    } catch (std::exception &e) {
        std::cout << "EXCEPTION :     " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }

    Bureaucrat y("osama", 149);
    std::cout << "BUREAUCRATE INFOS   :        "<< y << std::endl;
    try {
        y.decrementGrade();
        std::cout << "AFTER DECREMENT :       " << y << std::endl;
        std::cout << "ANOTHER TRY TO DENCREMENT WILL THORW EXCEPTION   " << std::endl;
        y.decrementGrade();
    } catch (std::exception &e) {
        std::cout << "EXCEPTION :     " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }

    // Copy constructor test
    Bureaucrat original("khalid", 75);
    std::cout << "ORIGINAL  INFOS :           " << original << std::endl;

    Bureaucrat copy(original);
    std::cout << "COPY  INFOS :           " << copy << std::endl;

    // Assignment operator test
    Bureaucrat assigned("smito", 120);
    assigned = original;
    std::cout << "ASSIGNED :         " << assigned << std::endl;
}