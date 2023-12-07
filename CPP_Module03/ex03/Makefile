NAME = DiamondTrap

SRC = main.cpp 	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJCT = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJCT)
	@C++   $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJCT)

fclean : clean
	rm -rf $(NAME)

re : fclean all
