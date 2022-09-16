SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
CC = c++
NAME = weapon
CFLAGS = -Wall -Wextra -Werror
SRC_O = $(SRC:.cpp=.o)
all :$(NAME)
$(NAME) : $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -f $(SRC_O)
fclean:clean
	@rm -f $(NAME)
re: fclean all