/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:17 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/03 19:44:41 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "phonebook_utils.hpp"
#include <string>
#include <iostream>

Phonebook::Phonebook(void)
{
	this->_current = 0;
	this->_nb_contacts = 0;
}

Phonebook::Phonebook(const Phonebook& phonebook)
{
	*this = phonebook;
}

Phonebook&	Phonebook::operator=(const Phonebook& phonebook)
{
	*this = phonebook;
	return (*this);
}
// todo finish display logic
void	Phonebook::display_contacts(void)
{
	for (int i = 0; i < this->_nb_contacts; i++)
	{
		std::cout << "         " << i << "|" << this->_contacts[i].get_first_name() << std::endl;
	}
}

void	Phonebook::search_contact(void)
{
	this->display_contacts();
	/*for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].get_first_name() == query_string || this->_contacts[i].get_last_name() == query_string \
			|| this->_contacts[i].get_nickname() == query_string || this->_contacts[i].get_phone_number() == query_string \
			|| this->_contacts->get_darkest_secret() == query_string)

	}
	std::cout << "No contact matched your query" << std::endl; */
	return;
}

//todo test this
void	Phonebook::add_contact(Contact new_contact)
{
	this->_contacts[_current] = new_contact;
	this->_current++;
	if (this->_current == 8)
		this->_current = 0;
	if (this->_nb_contacts < 8)
		this->_nb_contacts++;
}