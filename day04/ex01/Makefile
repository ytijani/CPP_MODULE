NAME = Animal

SRC = main.cpp 	Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJCT = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCT)
	@$(CC)  $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJCT)

fclean : clean
	rm -rf $(NAME)

re : fclean all
