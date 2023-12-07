NAME = main

SRC = main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = whatever.hpp

all : $(NAME)

$(NAME) : $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
