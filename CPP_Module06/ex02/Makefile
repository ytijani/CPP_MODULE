NAME = Base

SRC = main.cpp Base.cpp

CC = c++

HEADEAR = Base.hpp A.hpp B.hpp C.hpp

FLAGS =  -Wall -Wextra -Werror -std=c++98

OBJCT = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCT) $(HEADEAR)
	@$(CC)  $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJCT)

fclean : clean
	rm -rf $(NAME)

re : fclean all