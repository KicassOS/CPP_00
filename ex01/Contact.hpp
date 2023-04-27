/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 02:41:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/27 04:41:44 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	public:
		Contact(void);
		Contact(const Contact &phonebook);
		~Contact(void);
		Contact & operator = (const Contact &phonebook);

		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();

		void		set_first_name();
		void		set_last_name();
		void		set_nickname();
		void		set_phone_number();
		void		set_darkest_secret();

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	phone_number;
		std::string	_darkest_secret;
};

#endif
