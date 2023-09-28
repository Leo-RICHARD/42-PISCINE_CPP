NAME	=	karen

SRCS	=	Harl.cpp \
		main.cpp

HEADERS	=	Harl.h

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
