# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 20:29:13 by slaajour          #+#    #+#              #
#    Updated: 2023/05/25 01:28:42 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp \
	AForm.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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