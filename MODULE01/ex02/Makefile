NAME	=	hithisisbrain

SRCS	=	main.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CFLAGS	=	-Wall -Wextra -Werror -Wunused

CC	=	c++

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@

clean	:	
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
