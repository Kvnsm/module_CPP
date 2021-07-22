# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 16:59:32 by ksam              #+#    #+#              #
#    Updated: 2021/07/22 16:59:34 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC			= clang++
FLAGS		= -Wall -Werror -Wextra -std=c++98

NAME		= replace

SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS) *.replace
fclean:		clean
			$(RM) $(NAME)
re:			fclean 	all

.PHONY:		all clean fclean re