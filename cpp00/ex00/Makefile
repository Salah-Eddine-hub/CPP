# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 14:12:02 by sharrach          #+#    #+#              #
#    Updated: 2023/02/13 15:24:20 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS =	megaphone.cpp

CC =	c++

CPPFLAGS =	-Wall -Wextra -Werror

OBJS =	$(SRCS:.cpp=.o)

RM	= rm -f

%.o: %.cpp
			$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	: clean
			$(RM) $(NAME)

re		:	fclean all
