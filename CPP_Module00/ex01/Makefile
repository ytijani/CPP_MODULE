# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 21:40:26 by ytijani           #+#    #+#              #
#    Updated: 2022/12/19 16:31:37 by ytijani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = PhoneBook.cpp Contact.cpp

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

re : fclean al

.PHONY : all re clean fclean
