NAME = RPN

SRC = RPN.cpp main.cpp 

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 
HEADEAR = RPN.hpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp $(HEADEAR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re  : clean fclean all
