NAME = Animal

SRC = main.cpp 	Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJCT = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCT) $(HEADER)
	@$(CC)  $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJCT)

fclean : clean
	rm -rf $(NAME)

re : fclean all
