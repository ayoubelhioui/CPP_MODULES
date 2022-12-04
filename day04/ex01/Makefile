# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 10:28:32 by ael-hiou          #+#    #+#              #
#    Updated: 2022/12/04 15:17:10 by ael-hiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp Brain.cpp Cat.cpp Dog.cpp Animal.cpp
NAME := brain
STANDARD := -std=c++98
CXXFLAGS := -Wall -Wextra -Werror
OBJECT_FILES := $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJECT_FILES)
	$(CXX) $(OBJECT_FILES) -o $(NAME)
%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(STANDARD) -c $^
clean:
	$(RM) $(OBJECT_FILES)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : clean fclean re
