NAME	=	sedisforlosers

SRCS	=	main.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CFLAGS	=	-Wall -Wextra -Werror -Wunused

CC	=	c++

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@

tests	:	$(NAME)
		./tests/tests.sh

clean	:	
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME) tests/file0in.replace tests/file1in.replace tests/file2in.replace tests/file3in.replace tests/file4in.replace tests/sedisforlosers

re	:	fclean all

.PHONY	:	all tests clean fclean re
