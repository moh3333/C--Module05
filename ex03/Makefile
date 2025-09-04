NAME=Bureaucrat

CC= c++ 

CPPFLAGS= -std=c++98 -Wall -Wextra -Werror 

SRC= AForm.cpp Bureaucrat.cpp  main.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

OBJ= main.o AForm.o Bureaucrat.o ShrubberyCreationForm.o PresidentialPardonForm.o RobotomyRequestForm.o Intern.o

HEADER= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(shell ls | grep "_shrubbery")

fclean: clean
	rm -rf $(NAME)

re: fclean all