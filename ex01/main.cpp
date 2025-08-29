#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    std::cout <<  "\033[32m" << "(DEFAULT CONSTUCTOR )TESTING : PRINT  FOMR INFOS " << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    Form a;
    std::cout << a << std::endl;

    std::cout <<  "\033[32m" << "\nTESTING WITH VALID GRADE =>  DEFAULT (LOWEST POSIBLE GRADES)" << "\033[0m" << std::endl;

    std::cout << "___________________________\n" << std::endl;
    Bureaucrat d;
    Form s;
    try {
        d.signForm(s);
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }


    std::cout <<  "\033[32m" << "\n( PARMETRIZE CONSTRUCTOR )TESTING WITH TOO HIGHT SIGN GRADE AND VALID EXEC GRADE " << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    try{
        Form b("sofian", 0, 1);
    }

    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }

    std::cout <<  "\033[32m" << "\n( PARMETRIZE CONSTRUCTOR )TESTING WITH TOO HIGHT EXEC GRADE AND VALID SIGN GRADE " << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    try{
        Form b("sofian", 1, 0);
    }

    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }


    std::cout <<  "\033[32m" << "\n(BUREAUCRAT WITH TO LOW SIGN GRADE TRYING TO SIGN A FORM )TESTING WITH TOO LOW GRADE" << "\033[0m" << std::endl;
    std::cout << "___________________________\n" << std::endl;
    Bureaucrat c("hamza", 110);
    Form h("Form10", 100, 100);
    try{
        c.signForm(h);
    }
    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }
}