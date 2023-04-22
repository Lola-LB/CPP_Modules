SRCS	= main.cpp	\
		  RPN.cpp	\

INC		= RPN.hpp	\

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -g3 -Wall -Wextra -Werror -std=c++98

RM		= rm -f

NAME	= RPN

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
