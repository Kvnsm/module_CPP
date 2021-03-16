# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 13:03:03 by ksam              #+#    #+#              #
#    Updated: 2021/03/16 13:10:45 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

default : all

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra


$(NAME)	: $(OBJS)
		clang++ $(FLAGS) -o $(NAME) $(OBJS)

all		: $(NAME)

clean	:
		rm -f $(OBJS)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: clean fclean re all