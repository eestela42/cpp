NAME = BraiiiiiiinnnzzzZ
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp			\
		newZombie.cpp	\
		randomChump.cpp	\
		Zombie.cpp
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<
	
$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean all

po: all clean

.PHONY: all clean fclean re po