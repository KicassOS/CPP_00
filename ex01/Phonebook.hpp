/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:20 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/03 19:44:57 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>

class	Phonebook
{
	public:
		Phonebook(void);
		Phonebook(Phonebook const & phonebook);
		~Phonebook(void);

		Phonebook& operator=(const Phonebook& phonebook);

		void	add_contact(Contact new_contact);
		void	search_contact(void);
		void	display_contacts(void);

	private:
		Contact	_contacts[8];
		int		_current;
		int		_nb_contacts;
};

#endif