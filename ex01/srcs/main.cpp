/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:26:21 by mriant            #+#    #+#             */
/*   Updated: 2022/09/21 13:56:22 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#include "phonebook.h"

int	main(void)
{
	PhoneBook	pb1;
	std::string	str;
	int			ret;

	ret = 0;
	while (1)
	{
		std::cout << "Please enter an instruction: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
		if (std::cin.eof() == true)
			return (1);
		if (str == "ADD")
			ret = pb1.add();
		else if (str == "SEARCH")
			ret = pb1.search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Possible instructions are ADD, SEARCH and EXIT"
				<< std::endl;
		if (ret == 1)
			return (1);
	}
	return 0;
}
