# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 13:42:43 by ksam              #+#    #+#              #
#    Updated: 2021/06/08 06:32:30 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

default : all

NAME = phonebook

HEADER = includes/phonebook.hpp

SRCS =	srcs/Details.class.cpp \
		srcs/phonebook.cpp

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