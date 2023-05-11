/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 02:41:38 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/11 07:33:54 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include "phonebook_utils.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::Contact(const Contact& contact)
{
	this->_first_name = contact._first_name;
	this->_last_name = contact._last_name;
	this->_nickname = contact._nickname;
	this->_phone_number = contact._phone_number;
	this->_darkest_secret = contact._darkest_secret;
}

Contact&	Contact::operator=(const Contact& contact)
{
	if (this == &contact)
		return (*this);
	this->_first_name = contact.get_first_name();
	this->_last_name = contact.get_last_name();
	this->_nickname = contact.get_nickname();
	this->_phone_number = contact.get_phone_number();
	this->_darkest_secret = contact.get_darkest_secret();
	return (*this);
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

bool	Contact::set_first_name(std::string first_name)
{
	first_name = ft_check_blank(first_name);
	if (first_name.length() == 0)
	{
		std::cout << "Contact's first name cannot be empty" << std::endl;
		return (false);
	}
	this->_first_name = first_name;
	return (true);
}

bool	Contact::set_last_name(std::string last_name)
{
	last_name = ft_check_blank(last_name);
	if (last_name.length() == 0)
	{
		std::cout << "Contact's last name cannot be empty" << std::endl;
		return (false);
	}
	this->_last_name = last_name;
	return (true);
}

bool	Contact::set_nickname(std::string nickname)
{
	nickname = ft_check_blank(nickname);
	if (nickname.length() == 0)
	{
		std::cout << "Contact's nickname cannot be empty" << std::endl;
		return (false);
	}
	this->_nickname = nickname;
	return (true);
}

bool	Contact::set_phone_number(std::string phone_number)
{
	phone_number = ft_check_blank(phone_number);
	
	if (phone_number.length() == 0)
	{
		std::cout << "Contact's phone number cannot be empty" << std::endl;
		return (false);
	}
	this->_phone_number = phone_number;
	return (true);
}

bool	Contact::set_darkest_secret(std::string darkest_secret)
{
	darkest_secret = ft_check_blank(darkest_secret);
	if (darkest_secret.length() == 0)
	{
		std::cout << "Contact's darkest secret cannot be empty" << std::endl;
		return (false);
	}
	this->_darkest_secret = darkest_secret;
	return (true);
}

void	ft_format_contact_field(std::ostream& ostream, std::string field)
{
	int	padding = field.length() - 10;
	if (padding < 10)
		padding *= -1;
	else
		padding = 0;

	for (int i = 0; i < padding; i++)
		ostream << " ";
	for (int i = 0; field[i] && i < 9; i++)
		ostream << field[i];
	if (field.length() > 10)
		ostream << ".";
	else if (field.length() ==10)
		ostream << field[9];
}

std::ostream& operator<<(std::ostream& ostream, Contact const & rhs)
{
	ft_format_contact_field(ostream, rhs.get_first_name());
	ostream << "|";
	ft_format_contact_field(ostream, rhs.get_last_name());
	ostream << "|";
	ft_format_contact_field(ostream, rhs.get_nickname());
	std::cout << "|";
	return (ostream);
}
