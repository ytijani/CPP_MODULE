NAME = Point

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all


