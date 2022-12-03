# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 08:12:40 by ael-hiou          #+#    #+#              #
#    Updated: 2022/12/01 10:54:08 by ael-hiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp Animal.cpp Dog.cpp Cat.cpp
NAME := animal
STANDARD := -std=c++98
# CXXFLAGS := -Wall -Wextra -Werror
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
