# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/24 18:46:10 by ksam              #+#    #+#              #
#    Updated: 2021/06/26 22:16:59 by ksam             ###   ########lyon.fr    #
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