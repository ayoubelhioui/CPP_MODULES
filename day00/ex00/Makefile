# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hiou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 15:58:23 by ael-hiou          #+#    #+#              #
#    Updated: 2022/09/28 15:58:33 by ael-hiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := megaphone.cpp
NAME := megaphone
STANDARD := -std=c++98
CXXFLAGS := -Wall -Wextra -Werror
OBJECT_FILES := $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJECT_FILES)
	$(CXX) $(OBJECT_FILES) -o $(NAME)
%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(STANDARD) -c $?
clean:
	$(RM) $(OBJECT_FILES)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : clean fclean re
