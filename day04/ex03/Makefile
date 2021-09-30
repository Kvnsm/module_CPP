# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 15:01:28 by ksam              #+#    #+#              #
#    Updated: 2021/08/24 17:57:43 by ksam             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

default : all

NAME = InterfaceNrecap

HEADER =	AMateria.hpp \

SRCS =	main.cpp \
		AMateria.cpp \
		ICharacter.cpp \
		IMateriaSource

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address -std=c++98


$(NAME)	: $(OBJS) $(HEADER)
		clang++ $(FLAGS) -o $(NAME) $(OBJS)

all		: $(NAME)

clean	:
		rm -f $(OBJS)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: clean fclean re all