NAME = Zombie

SRC = main.cpp randomChump.cpp newZombie.cpp Zombie.cpp

HEADER = Zombie.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJCT = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCT) $(HEADER)
	$(CC) $(FLAGS) $(SRC)  -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJCT)

fclean : clean
	rm -rf $(NAME)

re : fclean all