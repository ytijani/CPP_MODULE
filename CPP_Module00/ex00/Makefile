# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 19:28:29 by ytijani           #+#    #+#              #
#    Updated: 2022/12/18 11:34:15 by ytijani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRC = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean