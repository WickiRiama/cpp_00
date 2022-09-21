/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:33 by mriant            #+#    #+#             */
/*   Updated: 2022/09/21 14:22:48 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "phonebook.h"

int	ft_isnumber(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (isdigit(*it) == 0)
			return (0);
	}
	return (1);
}

int	ask_index(int contact_size)
{
	std::string index_str = "";
	int			index = -1;

	while (index_str.size() == 0 || index > contact_size - 1 || index < 0)
	{
		std::cout << "Index of the contact to display: ";
		std::getline(std::cin, index_str);
		if (std::cin.eof())
			return (-1);
		else if (index_str.size() > 0)
		{
			if (ft_isnumber(index_str) == 0)
				std::cout << index_str << " is not a valid index" << std::endl;
			else
			{
				index = atoi(index_str.c_str());
				if (index > contact_size - 1 || index < 0)
					std::cout << "This index does not exist" << std::endl;
			}
		}
	}
	return (index);
}

int	ask_info(std::string display, std::string *field)
{
	while ((*field).size() == 0)
	{
		std::cout << display;
		std::getline(std::cin, *field);
		if (std::cin.eof())
			return (1);
		if (display == "Contact phone_number: "
			&& ((*field).size() != 10 || ft_isnumber(*field) == 0))
		{
			std::cout << "Invalid phone number" << std::endl;
			*field = "";
		}
	}
	return (0);
}

void	print_short(std::string str)
{
	if (str.size() > 9)
	{
		str.resize(9);
		str.push_back('.');
	}
	std::cout << std::setw(10) << str;
	return ;
}