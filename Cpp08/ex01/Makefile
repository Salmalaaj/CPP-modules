# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 06:31:47 by slaajour          #+#    #+#              #
#    Updated: 2023/06/17 06:48:44 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01 

SRC		=	main.cpp Span.cpp

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