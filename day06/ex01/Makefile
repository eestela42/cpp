CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Serialisation
INC = data.hpp

SRCS = main.cpp

OBJ = ${SRCS:.cpp=.o}

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJ) $(INC)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all