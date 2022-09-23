/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:56:21 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 11:33:49 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
private:

	int	nb_contacts;

	int	print_all_contacts(void);

public:

	Contact	contact_tab[8];

	PhoneBook(void);
	~PhoneBook(void);

	int	add(void);
	int	search(void);
	int	start_phonebook(void);
};

#endif
