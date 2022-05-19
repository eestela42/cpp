NAME = Account.exe
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Account.cpp	\
		tests.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean all

po: all clean

.PHONY: all clean fclean re po