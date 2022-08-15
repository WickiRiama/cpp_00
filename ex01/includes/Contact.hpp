/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:59:35 by mriant            #+#    #+#             */
/*   Updated: 2022/08/15 18:06:47 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
public:

	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	Contact(void);
	Contact(int index, std::string first_name, std::string last_name, 
		std::string nickname);
	~Contact(void);
};

#endif