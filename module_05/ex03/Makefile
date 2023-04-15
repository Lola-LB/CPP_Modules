SRCS	= main.cpp						\
		  Bureaucrat.cpp				\
		  AForm.cpp						\
		  PresidentialPardonForm.cpp	\
		  ShrubberyCreationForm.cpp		\
		  RobotomyRequestForm.cpp		\

INC		= Bureaucrat.hpp				\
		  AForm.cpp						\
		  AForm.hpp						\
		  PresidentialPardonForm.hpp	\
		  ShrubberyCreationForm.hpp		\
		  RobotomyRequestForm.hpp		\

OBJS	= $(SRCS:.cpp=.o)

CC		= c++ -g3

FLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow

RM		= rm -f

NAME	= form

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
