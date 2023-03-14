SRCS	= main.cpp			\
		  Bureaucrat.cpp	\

INC		= Bureaucrat.hpp	\

OBJS	= $(SRCS:.cpp=.o)

CC		= c++ -g3

FLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow

RM		= rm -f

NAME	= bureaucrat

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
