/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:14:42 by mriant            #+#    #+#             */
/*   Updated: 2022/09/21 12:18:24 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "PhoneBook.hpp"

int		ask_index(int contact_size);
int		ask_info(std::string display, std::string *field);
void	print_short(std::string str);

#endif
