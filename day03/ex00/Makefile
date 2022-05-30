NAME = VERSION_1
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp			\
		ClapTrap.cpp
OBJ = ${SRCS:.cpp=.o}

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re