/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:12:22 by mriant            #+#    #+#             */
/*   Updated: 2022/09/21 11:43:54 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void) :first_name(""), last_name(""), nickname(""),
		phone_number(""), darkest_secret("")
{
	return ;
}

Contact::Contact(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret) : first_name(first_name),
		last_name(last_name), nickname(nickname), phone_number(phone_number),
		darkest_secret(darkest_secret)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}
