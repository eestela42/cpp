NAME = ex00
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

INC = Bureaucrat.hpp

SRCS = main.cpp			\
		Bureaucrat.cpp
	

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all