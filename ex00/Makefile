NAME=Bureaucrat

CC= c++ 

CPPFLAGS=  -Wall -Wextra -Werror -std=c++98

SRC= Bureaucrat.cpp main.cpp

OBJ= main.o Bureaucrat.o

HEADER= Bureaucrat.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all