NAME = iter

SRC = main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = iter.hpp

all : $(NAME)

$(NAME) : $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
