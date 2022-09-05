/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:56:21 by mriant            #+#    #+#             */
/*   Updated: 2022/09/05 11:56:48 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
private:

	int	nb_contacts;

	int		print_all_contacts(void);
	void	print_one_contact(int index);

public:

	Contact	contact_tab[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	exit(void);
};

#endif
