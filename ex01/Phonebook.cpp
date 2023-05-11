/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:17 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/11 08:39:47 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "phonebook_utils.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

Phonebook::Phonebook(void)
{
	this->_current_contact = 0;
	this->_nb_contacts = 0;
}

Phonebook::Phonebook(const Phonebook& phonebook)
{
	this->_nb_contacts = phonebook._nb_contacts;
	this->_current_contact = phonebook._current_contact;
	for (int i = 0; i < phonebook._nb_contacts; i++)
		this->_contacts[i] = phonebook._contacts[i];
}

Phonebook&	Phonebook::operator=(const Phonebook& phonebook)
{
	if (this == &phonebook)
		return (*this);
	this->_nb_contacts = phonebook._nb_contacts;
	this->_current_contact = phonebook._current_contact;
	for (int i = 0; i < phonebook._nb_contacts; i++)
		this->_contacts[i] = phonebook._contacts[i];
	return (*this);
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::display_contacts(void)
{
	int	table_width = 45;
	std::cout << "      INDEX FIRST NAME  LAST NAME   NICKNAME" << std::endl;
	for (int i = 0; i < table_width; i++)
		std::cout << "-";
	std::cout << std::endl;

	for (int i = 0; i < this->_nb_contacts; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		std::cout << this->_contacts[i] << std::endl;
		for (int i = 0; i < table_width; i++)
			std::cout << "-";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

bool	Phonebook::search_contact(void)
{
	std::string	input;

	this->display_contacts();
	std::cout << "Please input the index of the contact you wish to examine" << std::endl;
	std::getline(std::cin, input);
	int	index_selected = atoi(input.c_str());
	if (index_selected > this->_nb_contacts || index_selected == 0)
	{
		std::cout << "You've provided an invalid contact index. Returning to main menu..." << std::endl;
		return (false);
	}
	std::cout << "You've selected the contact at index " << index_selected << std::endl;
	index_selected--;
	std::cout << "First name    : " << this->_contacts[index_selected].get_first_name() << std::endl;
	std::cout << "Last name     : " << this->_contacts[index_selected].get_last_name() << std::endl;
	std::cout << "Nickname      : " << this->_contacts[index_selected].get_nickname() << std::endl;
	std::cout << "Phone number  : " << this->_contacts[index_selected].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index_selected].get_darkest_secret() << std::endl;
	return (true);
}

void	Phonebook::add_contact(Contact &new_contact)
{
	this->_contacts[this->_current_contact] = new_contact;
	this->_current_contact++;
	if (this->_current_contact == 8)
		this->_current_contact = 0;
	if (this->_nb_contacts < 8)
		this->_nb_contacts++;
}

int	Phonebook::get_nb_contacts(void)
{
	return (this->_nb_contacts);
}