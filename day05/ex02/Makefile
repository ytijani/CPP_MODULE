NAME = Form

SRC = main.cpp Bureaucrat.cpp Form.cpp

CC = c++

HEADER  = Bureaucrat.hpp Form.hpp

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