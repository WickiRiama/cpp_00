/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:26:21 by mriant            #+#    #+#             */
/*   Updated: 2022/09/05 12:02:04 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

#include "phonebook.h"

int	ask_index(int contact_size)
{
	std::string index_str = "";
	int			index = -1;

	while (index_str.size() == 0 || index > contact_size - 1 || index < 0)
	{
		std::cout << "Index of the contact to display: ";
		std::getline(std::cin, index_str);
		if (index_str.size() > 0)
		{
			index = atoi(index_str.c_str());
			if (index > contact_size - 1 || index < 0)
				std::cout << "Thhis index does not exist" << std::endl;
		}
	}
	return (index);
}

void	ask_info(std::string display, std::string *field)
{
	while ((*field).size() == 0)
	{
		std::cout << display;
		std::getline(std::cin, *field);
	}
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

int	main(void)
{
	PhoneBook	pb1;

	pb1.add();
	pb1.add();
	pb1.search();
	return 0;
}
