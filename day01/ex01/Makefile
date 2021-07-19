# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 15:37:56 by ksam              #+#    #+#              #
#    Updated: 2021/07/19 15:38:45 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

default : all

NAME = m0arbrainz

HEADER = Zombie.hpp

SRCS =	Zombie.cpp \
		ZombieHorde.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98


$(NAME)	: $(OBJS) $(HEADER)
		clang++ $(FLAGS) -o $(NAME) $(OBJS)

all		: $(NAME)

clean	:
		rm -f $(OBJS)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: clean fclean re all