/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:20 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/16 11:57:14 by pszleper         ###   ########.fr       */
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

		int		get_nb_contacts(void);
		void	add_contact(Contact &new_contact);
		bool	search_contact(void);
		void	display_contacts(void);

	private:
		Contact	_contacts[8];
		int		_current_contact;
		int		_nb_contacts;
};

#endif
