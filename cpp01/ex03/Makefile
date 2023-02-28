# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 14:40:07 by sharrach          #+#    #+#              #
#    Updated: 2023/02/28 14:42:45 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = adresses

HEADER =	HumanA.hpp\
			HumanB.hpp\
			Weapon.hpp

SRCS =	main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp

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
