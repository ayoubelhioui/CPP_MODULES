SRC = Phonebook.cpp Contact.cpp main.cpp
CC = c++
NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC_O = $(SRC:.cpp=.o)

all : $(NAME)
$(NAME) : $(SRC_O)
	$(CC) $(SRC_O) -o $(NAME)
%.o : %.cpp
	$(CC) $(CFLAGS) -c $?
clean:
	@rm -f $(SRC_O)
fclean:clean
	@rm -f $(NAME)
re: fclean all
