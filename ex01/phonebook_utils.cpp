/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:45:22 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/03 19:45:24 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string	ft_check_blank(std::string input)
{
	int			i =0;
	std::string	blank_string = "";

	while (input[i])
	{
		if (!std::isspace(input[i]))
			return (input);
		i++;
	}
	return (blank_string);
}
