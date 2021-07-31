# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 19:10:52 by ksam              #+#    #+#              #
#    Updated: 2021/07/31 14:32:05 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME	=	fixed-utils

SRCS	=	main.cpp \
			Fixed.cpp
OBJS	=	$(SRCS:.cpp=.o)

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re