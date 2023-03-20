# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 12:09:54 by sharrach          #+#    #+#              #
#    Updated: 2023/03/20 12:12:33 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

HEADER =	ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\
			DiamondTrap.hpp

SRCS =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp

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
