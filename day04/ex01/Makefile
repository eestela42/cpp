NAME = ex01
CC = c++
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

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all