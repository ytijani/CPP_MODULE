NAME = easyfind

SRC = main.cpp

CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
