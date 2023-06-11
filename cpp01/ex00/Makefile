# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 23:51:33 by sharrach          #+#    #+#              #
#    Updated: 2023/02/23 23:52:52 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

HEADER = Zombie.hpp

SRCS =	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\
		main.cpp

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
