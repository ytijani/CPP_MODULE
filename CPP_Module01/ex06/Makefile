NAME = harlFilter

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

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
