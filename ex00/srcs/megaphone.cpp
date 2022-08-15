/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:35:32 by mriant            #+#    #+#             */
/*   Updated: 2022/08/15 15:44:09 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

// int	main(int ac, char **av)
// {
// 	std::string	result = "";
// 	int			i;
// 	int			j;

// 	if (ac == 1)
// 	{
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 		return (0);
// 	}
// 	i = 1;
// 	while (av[i])
// 	{
// 		j = 0;
// 		while (av[i][j])
// 		{
// 			result.push_back(std::toupper(av[i][j]));
// 			j++;
// 		}
// 		i++;
// 	}
// 	std::cout << result << std::endl;
// 	return (0);
// }

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string	str = av[i];
		for (std::string::iterator it = str.begin(); it != str.end(); it++)
		{
			std::string s(1, std::toupper(*it));
			std::cout << s;
		}
	}
	std::cout << std::endl;
	return (0);
}