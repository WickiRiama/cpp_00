/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:26:21 by mriant            #+#    #+#             */
/*   Updated: 2022/09/05 10:37:48 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.h"

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
	// pb1.add();
	pb1.search();
	return 0;
}
