# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 10:39:27 by slaajour          #+#    #+#              #
#    Updated: 2023/06/24 10:39:50 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	RPN

SRC		=	main.cpp RPN.cpp

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