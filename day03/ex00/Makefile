NAME = VERSION_1
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp			\
		ClapTrap.cpp
OBJ = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

flcean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re