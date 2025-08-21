CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ex03

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) -c $(SRC) $(FLAGS)
	$(CPP) -o $(NAME) $^ $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re