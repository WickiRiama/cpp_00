/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:53:37 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 11:24:58 by mriant           ###   ########.fr       */
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
	while (i < 8 && this->contact_tab[i].get_first_name() != "")
	{
		std::cout << std::setw(10) << i;
		std::cout << '|';
		print_short(this->contact_tab[i].get_first_name());
		std::cout << '|';
		print_short(this->contact_tab[i].get_last_name());
		std::cout << '|';
		print_short(this->contact_tab[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	return (i);
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
	contact_tab[index].print_contact_infos();
	return (0);
}

int	PhoneBook::start_phonebook()
{
	int	ret = 0;
	std::string	str;
	
	while (1)
	{
		std::cout << "Please enter an instruction: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
		if (std::cin.eof() == true)
			return (1);
		if (str == "ADD")
			ret = this->add();
		else if (str == "SEARCH")
			ret = this->search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Possible instructions are ADD, SEARCH and EXIT"
				<< std::endl;
		if (ret == 1)
			return (1);
	}
	return (0);
}
