/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:53:37 by mriant            #+#    #+#             */
/*   Updated: 2022/08/29 17:27:14 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

#include "phonebook.h"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook created" << std::endl;
	this->nb_contacts = 0;
	std::cout << "nb_contacts: " << this->nb_contacts << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::add()
{
	std::string	first_name("");
	std::string	last_name("");
	std::string	nickname("");

	while (first_name.size() == 0)
	{
		std::cout << "Contact first name : ";
		std::getline(std::cin, first_name);
	}
	while (last_name.size() == 0)
	{
		std::cout << "Contact last name : ";
		std::getline(std::cin, last_name);
	}
	while (nickname.size() == 0)
	{
		std::cout << "Contact  nickname : ";
		std::getline(std::cin, nickname);
	}
	Contact	new_contact(this->nb_contacts, first_name, last_name, nickname);
	this->contact_tab[this->nb_contacts % 8] = new_contact;
	this->nb_contacts++;
	return ;
}

void	PhoneBook::search()
{
	std::string	short_str;
	std::string	index_str = "";
	int			index;
	int			i;

	i = 0;
	if (this->nb_contacts == 0)
	{
		std::cout << "There is no registered contact" << std::endl;
		return ;
	}
	while (i < 8 && this->contact_tab[i].first_name != "")
	{
		std::cout << std::setw(10) << i;
		std::cout << '|';
		print_short(this->contact_tab[i].first_name);
		std::cout << '|';
		print_short(this->contact_tab[i].last_name);
		std::cout << '|';
		print_short(this->contact_tab[i].nickname);
		std::cout << std::endl;
		i++;
	}
	while (index_str.size() == 0 || index > i - 1 || index < 0)
	{
		std::cout << "Index of the contact to display: ";
		std::getline(std::cin, index_str);
		index = atoi(index_str.c_str());
		if (index > i - 1 || index < 0)
			std::cout << "Thhis index does not exist" << std::endl;
	}
	return ;
}

void	PhoneBook::exit()
{
	return ;
}
