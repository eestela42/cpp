NAME = ex00
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp			\
		Animal.cpp		\
		Dog.cpp			\
		Cat.cpp			\
		WrongAnimal.cpp	\
		WrongDog.cpp	\
		WrongCat.cpp		

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
