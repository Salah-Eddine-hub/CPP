# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 12:13:45 by sharrach          #+#    #+#              #
#    Updated: 2023/02/23 12:45:09 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

HEADER = PhoneBook.hpp\
		 Contact.hpp

SRCS =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp

CC =	c++

CPPFLAGS =	-Wall -Wextra -Werror

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
