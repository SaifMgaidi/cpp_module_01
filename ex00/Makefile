NAME = Zombie

RM = rm -rf

CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra -I.

SRC = ./main.cpp \
	  ./Zombie.cpp \
	  ./newZombie.cpp \
	  ./randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re