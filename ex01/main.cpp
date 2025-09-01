#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

    std::cout <<  "\033[32m" << "_____(DEFAULT CONSTUCTOR )TESTING : PRINT  FOMR INFOS " << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Form a;
    std::cout << a << std::endl;

    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT TRYING TO SING FORM )TESTING WITH VALID GRADE =>  DEFAULT (LOWEST POSIBLE GRADES)" << "\033[0m" << std::endl;

    std::cout << "_______________________________________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat d;
    Form s;
    try {
        std::cout << d << std::endl;
        std::cout << std::endl;
        std::cout << s << std::endl;
        std::cout << std::endl;
        d.signForm(s);
    }
    catch(const std::exception& e){
        std::cout << std::endl;
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << s << std::endl;
    std::cout << std::endl;


    std::cout <<  "\033[32m" << "\n(_____FORM PARMETRIZE CONSTRUCTOR )TESTING WITH TOO HIGHT SIGN GRADE AND VALID EXEC GRADE " << "\033[0m" << std::endl;
    std::cout << "_______________________________________________________________________________________________________________________________________\n" << std::endl;
    try{
        Form b("FIRST_FORM", 0, 1);
    }

    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }

    std::cout <<  "\033[32m" << "\n_____(FORM PARMETRIZE CONSTRUCTOR )TESTING WITH TOO HIGHT EXEC GRADE AND VALID SIGN GRADE " << "\033[0m" << std::endl;
    std::cout << "_______________________________________________________________________________________________________________________________________\n" << std::endl;
    try{
        Form b("SECEND_FORM", 1, 0);
    }

    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }


    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT WITH TOO LOW SIGN GRADE TRYING TO SIGN A FORM )TESTING WITH TOO LOW GRADE EXCEPTION TO SIGN" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat c("FIRST_BUREAUCRAT", 110);
    Form h("THIRD_FORM", 100, 100);
    try{
        std::cout << c << std::endl;
        std::cout << std::endl;
        std::cout << h << std::endl;
        std::cout << std::endl;
        c.signForm(h);
    }
    catch(const std::exception& e){
        std::cout << std::endl;
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }

    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT TRYING TO SING FORM )TESTING WITH VALID GRADE " << "\033[0m" << std::endl;

    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat x("SECEND_BUREAUCRAT", 2);
    Form m("FOURTH_FORM", 10, 10);
    try {
        std::cout << x << std::endl;
        std::cout << std::endl;
        std::cout << m << std::endl;
        std::cout << std::endl;
        x.signForm(m);
    }
    catch(const std::exception& e){
        std::cout << std::endl;
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << m << std::endl;
    std::cout << std::endl;
}