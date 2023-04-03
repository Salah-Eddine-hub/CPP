# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 09:07:42 by sharrach          #+#    #+#              #
#    Updated: 2023/03/25 11:34:21 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

HEADER =	Animal.hpp\
			Cat.hpp\
			Dog.hpp\
			Brain.hpp

SRCS =	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp

CC =	c++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

OBJS =	$(SRCS:.cpp=.o)

RM	= rm -f

%.o: %.cpp $(HEADER)
			$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :	$(OBJS) $(HEADER)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	: clean
			$(RM) $(NAME)

re		:	fclean all
