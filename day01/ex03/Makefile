NAME = Unnecessary_violence
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp				\
		HumanA.cpp			\
		HumanB.cpp			\
		Weapon.cpp
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean all

po: all clean

.PHONY: all clean fclean re po