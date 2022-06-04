CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = ex00
INC = Span.hpp

SRCS = main.cpp	\
		Span.cpp

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