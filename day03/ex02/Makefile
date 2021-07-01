# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 14:45:44 by ksam              #+#    #+#              #
#    Updated: 2021/07/01 15:09:28 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	claptrap

SRCS		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re