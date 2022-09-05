/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:12:22 by mriant            #+#    #+#             */
/*   Updated: 2022/09/05 11:00:26 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void) :first_name(""), last_name(""), nickname(""),
		darkest_secret(""), phone_number("")
{
	std::cout << "Contact default contructor" << std::endl;
	return ;
}

Contact::Contact(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret) : first_name(first_name),
		last_name(last_name), nickname(nickname), phone_number(phone_number),
		darkest_secret(darkest_secret)
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}
