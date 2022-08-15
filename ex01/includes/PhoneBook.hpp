/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:56:21 by mriant            #+#    #+#             */
/*   Updated: 2022/08/15 18:02:48 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
private:
	
	int	nb_contacts;

public:

	Contact	contact_tab[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add();
	void	search();
	void	exit();
};

#endif