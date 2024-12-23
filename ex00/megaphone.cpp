/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:27:50 by felhafid          #+#    #+#             */
/*   Updated: 2024/12/22 15:10:33 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < ac)
		{
		   j = 0;
		   while (av[i][j])
		   {
				av[i][j] = toupper(av[i][j]);
				j++;
		   }
		   std::cout << av[i];
		   i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
