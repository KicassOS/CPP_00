/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper <pszleper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:45:27 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/15 14:38:11 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

void	ft_handle_no_arg(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		exit(EXIT_SUCCESS);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isspace(argv[i][j]))
			{
				return ;
			}
		}
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	exit(EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	std::string str;

	ft_handle_no_arg(argc, argv);
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (int j = 0; argv[i][j] != '\0'; j++)
			argv[i][j] = std::toupper(str[j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
