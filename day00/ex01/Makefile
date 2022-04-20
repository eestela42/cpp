NAME = My_Awesome_PhoneBook
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS =	main.cpp		\
		Contact.cpp		\
		PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

po: all clean

.PHONY: all clean fclean re po

