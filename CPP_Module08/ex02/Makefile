NAME = Stack

SRC = main.cpp 

CC = c++

HEADER = MutantStack.hpp

CFLAG = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC) $(HEADER)
	$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
