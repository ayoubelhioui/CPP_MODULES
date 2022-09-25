SRC := megaphone.cpp main.cpp
NAME := megaphone
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRC_O := $(SRC:.cpp=.o)

all : $(NAME)
$(NAME) : $(SRC_O)
	@printf "1\n"
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
%.o : %.cpp
	@printf "2\n"
	@$(CXX) $(CXXFLAGS) -c $?
	echo "-> " + $?
clean:
	@rm -f $(SRC_O)
fclean:clean
	@rm -f $(NAME)
re: fclean all
