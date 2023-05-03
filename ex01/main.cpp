/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:12 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/03 01:44:55 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>

#define PROMPT "Do you wish to ADD a new contact, SEARCH a contact, or EXIT?"

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

		std::cout << "\nYou've chosen to add a contact, please fill out its' information:" << std::endl;
		std::cout << "Please input the contact's first name" << std::endl;
		std::getline(std::cin, input);
		if (!new_contact.set_first_name(input))
			return;
		std::cout << "Please input the contact's last name" << std::endl;
		std::getline(std::cin, input);
		if (!new_contact.set_last_name(input))
			return;
		std::cout << "Please input the contact's nickname" << std::endl;
		std::getline(std::cin, input);
		if (!new_contact.set_nickname(input))
			return;
		std::cout << "Please input the contact's phone number" << std::endl;
		std::getline(std::cin, input);
		if (!new_contact.set_phone_number(input))
			return;
		std::cout << "Please input the contact's darkest secret" << std::endl;
		std::getline(std::cin, input);
		if (!new_contact.set_darkest_secret(input))
			return;
		// Phonebook.add_contact(&new_contact);
		std::cout << std::endl << "Contact " << new_contact.get_first_name() << " " << new_contact.get_last_name() << " added!" << std::endl;
		return ;
	}
	else if (input == "SEARCH")
	{
		std::cout << "You've chosen to search for a contact" << std::endl;
	}
	else if (input == "EXIT")
		exit(EXIT_SUCCESS);
	else
		std::cout << "You must input either ADD, SEARCH or EXIT in uppercase" << std::endl;
}

int	main(int argc, char **argv)
{
	(void) argv;
	// Phonebook	Phonebook;
	std::string		input;

std::cout << "Hello" << " " + 8 << "World" <<std::endl;
	if (argc != 1)
	{
		ft_print_help();
		return (EXIT_FAILURE);
	}
	while (true)
	{
		std::cout << PROMPT << std::endl;
		std::getline(std::cin, input);
		ft_handle_input(input);
	}
	return (EXIT_SUCCESS);
}
