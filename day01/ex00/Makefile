# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 14:39:54 by ksam              #+#    #+#              #
#    Updated: 2021/07/19 14:42:07 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

default : all

NAME = brainz

HEADER = Zombie.hpp

SRCS =	Zombie.cpp \
		randomChump.cpp \
		newZombie.cpp \
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