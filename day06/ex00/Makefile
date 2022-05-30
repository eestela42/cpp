CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = ex00
INC = 

SRCS = main.cpp

OBJ = ${SRCS.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJ) $(INC)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all