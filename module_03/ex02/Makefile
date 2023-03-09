SRCS	= main.cpp			\
		  ClapTrap.cpp		\
		  ScavTrap.cpp		\
		  FragTrap.cpp		\

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow

RM		= rm -f

NAME	= frag

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
