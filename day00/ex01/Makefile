# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 13:42:43 by ksam              #+#    #+#              #
#    Updated: 2021/03/17 15:04:33 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

default : all

NAME = phonebook

HEADER = includes/phonebook.hpp

SRCS =	srcs/add.cpp \
		srcs/Details.class.cpp \
		srcs/linked_list.cpp \
		srcs/phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address


$(NAME)	: $(OBJS) $(HEADER)
		clang++ $(FLAGS) -o $(NAME) $(OBJS)

all		: $(NAME)

clean	:
		rm -f $(OBJS)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: clean fclean re all