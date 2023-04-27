/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:23:20 by pszleper          #+#    #+#             */
/*   Updated: 2023/04/27 04:41:28 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Phonebook
{
	public:
		Phonebook(void);
		Phonebook(const Phonebook &phonebook);
		~Phonebook(void);
		Phonebook & operator = (const Phonebook &phonebook);

		void	add_contact();
		void	search_contact();

	private:
		Contact	contacts[5];

};

#endif