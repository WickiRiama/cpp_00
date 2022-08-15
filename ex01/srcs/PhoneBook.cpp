/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:53:37 by mriant            #+#    #+#             */
/*   Updated: 2022/08/15 18:07:16 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook created" << std::endl;
	this->nb_contacts = 0;
	std::cout << "nb_contacts: " << this->nb_contacts << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	std::cout << "Contact first name : ";
	std::cin >> first_name;
	std::cout << "Contact last name : ";
	std::cin >> last_name;
	std::cout << "Contact  nickname : ";
	std::cin >> nickname;

	Contact	new_contact(this->nb_contacts, first_name, last_name, nickname);
	this->contact_tab[this->nb_contacts % 8] = new_contact;
	this->nb_contacts++;

	std::cout << "New Contact: " << this->contact_tab[0].index << this->contact_tab[0].first_name << this->contact_tab[0].last_name << std::endl;
	return ;
}

void	PhoneBook::search()
{
	return ;
}

void	PhoneBook::exit()
{
	return ;
}
