/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 02:41:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/10 23:34:25 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	public:
		Contact(void);
		Contact(const Contact &contact);
		~Contact(void);
		Contact& operator=(const Contact& contact);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;

		bool		set_first_name(std::string first_name);
		bool		set_last_name(std::string last_name);
		bool		set_nickname(std::string nickname);
		bool		set_phone_number(std::string phone_number);
		bool		set_darkest_secret(std::string darkest_secret);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

std::ostream& operator<<(std::ostream& ostream, Contact const & rhs);

#endif
