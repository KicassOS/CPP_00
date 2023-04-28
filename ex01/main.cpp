/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:12 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/27 17:11:03 by pszleper         ###   ########.fr       */
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
	std::cout << "Usage: ./Phonebook\n" << "Once open, you can type one of the following (case-sensitive) commands:\n" \
	<< "ADD: add a new contact\nSEARCH: find a contact and display its' information\nEXIT: exit the program and delete all contacts" << std::endl;
}

void	ft_handle_input(std::string input)
{
	if (input == "ADD")
	{
		std::string	input;
		Contact		new_contact;

		std::cout << "You've chosen to add a contact, please fill out its' information:" << std::endl;
		std::cout << "Please input the contact's first name:" << std::endl;
		std::cin >> input;
		new_contact.set_first_name(input);
	}
	if (input == "SEARCH")
	{
		std::cout << "You've chosen to search for a contact" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	(void) argv;
	// Phonebook	Phonebook;
	std::string		input;

	if (argc != 1)
	{
		ft_print_help();
		exit(EXIT_FAILURE);
	}
	std::cout << "Phonebook open, do you wish to ADD a new contact, SEARCH a contact, or EXIT?" << std::endl;
	std::cin >> input;
	while (input != "EXIT")
	{
		ft_handle_input(input);
		std::cin >> input;
	}
	return (EXIT_SUCCESS);
}
