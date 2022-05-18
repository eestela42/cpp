NAME = ex01
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98

INC = Animal.hpp		\
		Dog.hpp			\
		Cat.hpp			\
		Brain.hpp

SRCS = main.cpp			\
		Animal.cpp		\
		Dog.cpp			\
		Cat.cpp			\
		Brain.cpp

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(SRCS) $(INC) -o $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all