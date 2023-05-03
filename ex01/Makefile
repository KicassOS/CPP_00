# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 16:09:59 by pszleper          #+#    #+#              #
#    Updated: 2023/05/03 19:46:52 by pszleper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILATION = c++ -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp Phonebook.cpp main.cpp phonebook_utils.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Phonebook.hpp Contact.hpp phonebook_utils.hpp

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