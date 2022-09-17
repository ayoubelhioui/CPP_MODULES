SRC = main.cpp Harl.cpp
CC = c++
NAME = harl
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