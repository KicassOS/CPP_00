# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 16:09:59 by pszleper          #+#    #+#              #
#    Updated: 2023/04/18 03:42:06 by pszleper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILATION = c++ -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp Phonebook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Phonebook.hpp Contact.hpp

NAME = ./Phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILATION) $^ -o $(NAME)

%.o: %.cpp
	$(COMPILATION) $^ -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all