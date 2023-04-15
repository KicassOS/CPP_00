# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 16:09:59 by pszleper          #+#    #+#              #
#    Updated: 2023/04/15 04:25:57 by pszleper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILATION = c++ -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Account.hpp

NAME = tests

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(COMPILATION) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(COMPILATION) $< -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all