#include "Bureaucrat.hpp"

int main(){
    std::cout <<  "\033[32m" << "TESTING WITH DEFAULT GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    Bureaucrat a;
    std::cout << a << std::endl;

    std::cout <<  "\033[32m" << "\nTESTING WITH VALID GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    Bureaucrat d("howa", 15);
    std::cout << d << std::endl;

    std::cout <<  "\033[32m" << "\nTESTING WITH TOO HIGHT GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    try{
        Bureaucrat b("sofian", 0);
    }

    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }


    std::cout <<  "\033[32m" << "\nTESTING WITH TOO LOW GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    try{
        Bureaucrat c("hamza", 154);
    }
    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }
}