/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:53:37 by mriant            #+#    #+#             */
/*   Updated: 2022/09/21 13:54:28 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#include "phonebook.h"

PhoneBook::PhoneBook(void)
{
	this->nb_contacts = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::add()
{
	std::string	first_name("");
	std::string	last_name("");
	std::string	nickname("");
	std::string	phone_number("");
	std::string	darkest_secret("");

	if (ask_info("Contact first name: ", &first_name)
		|| ask_info("Contact last name: ", &last_name)
		|| ask_info("Contact nickname: ", &nickname)
		|| ask_info("Contact phone_number: ", &phone_number)
		|| ask_info("Contact darkest secret: ", &darkest_secret))
			return (1);
	Contact	new_contact(first_name, last_name, nickname, phone_number,
		darkest_secret);
	this->contact_tab[this->nb_contacts % 8] = new_contact;
	this->nb_contacts++;
	return (0);
}

int	PhoneBook::print_all_contacts(void)
{
	int	i;

	i = 0;
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
	return (i);
}

void	PhoneBook::print_one_contact(int index)
{
	std::cout << "First name: " << this->contact_tab[index].first_name
		<< std::endl;
	std::cout << "Last name: " << this->contact_tab[index].last_name
		<< std::endl;
	std::cout << "Nickname: " << this->contact_tab[index].nickname << std::endl;
	std::cout << "Phone number: " << this->contact_tab[index].phone_number
		<< std::endl;
	std::cout << "Darkest Secret: " << this->contact_tab[index].darkest_secret
		<< std::endl;
}

int	PhoneBook::search()
{
	std::string	short_str;
	int			index;
	int			contact_size;

	if (this->nb_contacts == 0)
	{
		std::cout << "There is no registered contact" << std::endl;
		return (0);
	}
	contact_size = print_all_contacts();
	index = ask_index(contact_size);
	if (index == -1)
		return (1);
	print_one_contact(index);
	return (0);
}
