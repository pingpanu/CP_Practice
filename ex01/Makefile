NAME = horde
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = 	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJ = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) $(SRCS) -c

all: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

.PHONY : all clean fclean