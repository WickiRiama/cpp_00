/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:12:22 by mriant            #+#    #+#             */
/*   Updated: 2022/08/15 18:02:16 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void) : index(-1), first_name(""), last_name(""), nickname("")
{
	std::cout << "Contact default contructor" << std::endl;
	return ;
}

Contact::Contact(int index, std::string first_name, std::string last_name,
		std::string nickname) : index(index), first_name(first_name),
		last_name(last_name), nickname(nickname)
{
	std::cout << "Contact constructor called" << std::endl;
	std::cout << "index: " << this->index << std::endl;
	std::cout << "first_name: " << this->first_name << std::endl;
	std::cout << "last_name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}