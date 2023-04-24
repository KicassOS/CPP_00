/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:12 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/24 17:00:51 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>

void	ft_print_help()
{
	std::cout << "Usage: ./Phonebook OPERATION\n" << "OPERATION can be only be one of the following (case-sensitive):\n" \
	<< "ADD: add a new contact\nSEARCH: find a contact and display its' information\nEXIT: exit the program and delete all contacts" << std::endl;
}

void	ft_validate_input(std::string argv_1)
{
	if (argv_1 != "ADD" && argv_1 != "SEARCH" && argv_1 != "EXIT")
	{
		ft_print_help();
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	// Phonebook	Phonebook;
	if (argc != 2)
	{
		ft_print_help();
		return (EXIT_FAILURE);
	}
	std::string	input = argv[1];
	ft_validate_input(input);
	return (EXIT_SUCCESS);
}
