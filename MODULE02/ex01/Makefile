# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrichard <lrichard@student.42lyon.f>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 19:06:30 by lrichard          #+#    #+#              #
#    Updated: 2022/04/28 19:07:08 by lrichard         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed

SRCS	=	Fixed.cpp \
		main.cpp

HEADERS	=	Fixed.h

OBJS	=	$(SRCS:%.cpp=%.o)

CFLAGS	=	-Wall -Wextra -Werror -Wunused

CC	=	c++

RM	=	rm -f

%.o	:	%.cpp $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@

clean	:	
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
