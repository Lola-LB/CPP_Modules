SRCS	= main.cpp			\
		  AMateria.cpp		\
		  Cure.cpp			\
		  Character.cpp		\

INC		= AMateria.hpp		\
		  ICharacter.hpp	\
		  Character.hpp		\
		  Cure.hpp			\
		  Ice.hpp			\

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f

NAME	= materia

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
