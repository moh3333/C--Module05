#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

    std::cout <<  "\033[32m" << "_____(DEFAULT CONSTRUCTOR )TESTING : PRINT FORM INFOS " << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Form a;
    std::cout << "FORM INFOS :         " << a << std::endl;


    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT TRYING TO SIGN FORM )TESTING WITH VALID GRADE => DEFAULT (LOWEST POSSIBLE GRADE)" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat d;
    Form s;
    try {
        std::cout << "BUREAUCRATE INFOS :         " << d << std::endl;
        std::cout << "FORM INFOS :       " << s << std::endl;
        d.signForm(s);
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION :        " << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }
    std::cout << "AFTER SIGN TRY  ==> FORM INFOS :         " << s << std::endl;

    std::cout <<  "\033[32m" << "\n_____(FORM PARAMETERIZED CONSTRUCTOR )TESTING WITH TOO HIGH SIGN GRADE" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    try{
        Form b("FIRST_FORM", 0, 1);
    }
    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }

    std::cout <<  "\033[32m" << "\n_____(FORM PARAMETERIZED CONSTRUCTOR )TESTING WITH TOO HIGH EXEC GRADE" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    try{
        Form b("SECOND_FORM", 1, 0);
    }
    catch(const std::exception& e){
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }

    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT WITH TOO LOW SIGN GRADE TRYING TO SIGN A FORM )" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat c("FIRST_BUREAUCRAT", 110);
    Form h("THIRD_FORM", 100, 100);
    try{
        std::cout << "BUREAUCRATE INFOS :          " << c << std::endl;
        std::cout << "FORM INFOS :        " << h << std::endl;
        c.signForm(h);
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION : " << "\033[31m" << e.what() << "\033[0m" << std::endl; 
    }
    std::cout << "AFTER THE SIGN TRY ==> FORM INFOS :        " << h << std::endl;



    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT TRYING TO SIGN FORM )TESTING WITH VALID GRADE" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat x("SECOND_BUREAUCRAT", 2);
    Form m("FOURTH_FORM", 10, 10);
    try {
        std::cout << "BUREAUCRATE INFOS :      " << x << std::endl;
        std::cout << "FORM INFOS  :           " << m << std::endl;
        x.signForm(m);
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION : " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "AFTER THE SIGN TRY ==> FORM INFOS  :            "<< m << std::endl;


    std::cout <<  "\033[32m" << "\n_____(BUREAUCRAT WITH EXACT GRADE REQUIRED TO SIGN )" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat exact("THIRD_BUREAUCRATE", 50);
    Form exactForm("FIFTH_FORM", 50, 30);
    try{
        exact.signForm(exactForm);
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION : " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "AFTER THE SIGN TRY ==> FORM INFOS  :          " << exactForm << std::endl;



    std::cout <<  "\033[32m" << "\n_____(FORM ALREADY SIGNED BEING SIGNED AGAIN )" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat can("FOURTH_BUREAUCRATE", 1);
    Form repeat("SIXTH_FORM", 100, 50);
    try{
        can.signForm(repeat);  
        can.signForm(repeat); 
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION : " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "FORM INFOS :         " << repeat << std::endl;




    std::cout <<  "\033[32m" << "\n_____(MULTIPLE BUREAUCRATS ATTEMPTING SAME FORM )" << "\033[0m" << std::endl;
    std::cout << "____________________________________________________________________________________________________________\n" << std::endl;
    Bureaucrat cant("FIFTH_BUREAUCRATE", 120);
    Form teamForm("SEVENTH_FORM", 100, 50);
    try{
        cant.signForm(teamForm); 
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION : " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "FORM INFOS AFTER THE FOURTH_BUREAUCRATE TRY =>  " << teamForm << std::endl;

    try{
        can.signForm(teamForm); 
    }
    catch(const std::exception& e){
        std::cout << "EXCEPTION : " << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "FORM INFOS AFTER THE FIFTH_BUREAUCRATE TRY =>  " << teamForm << std::endl;

    return 0;
}
