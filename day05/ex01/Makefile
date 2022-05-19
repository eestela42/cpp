NAME = ex01
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

INC = Bureaucrat.hpp	\
		Form.hpp

SRCS = main.cpp			\
		Bureaucrat.cpp	\
		Form.cpp		
		
	

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all