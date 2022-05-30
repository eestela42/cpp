NAME = harlFilter
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp	\
		Harl.cpp
OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<
	
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