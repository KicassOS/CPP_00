# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 16:09:59 by pszleper          #+#    #+#              #
#    Updated: 2023/04/15 02:16:58 by pszleper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILATION = c++ -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp

HEADER = Account.hpp

NAME = tests

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(COMPILATION) $(SRC) -o $(NAME)

%.o: %.cpp
	$(COMPILATION) $(SRC) -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all