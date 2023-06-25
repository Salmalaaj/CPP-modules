# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 11:37:40 by slaajour          #+#    #+#              #
#    Updated: 2023/06/24 11:38:16 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PmergeMe

SRC		=	main.cpp PmergeMe.cpp

CC		=	c++

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re