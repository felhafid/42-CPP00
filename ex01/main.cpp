/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:35:27 by felhafid          #+#    #+#             */
/*   Updated: 2024/12/22 15:50:02 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone;
    std::string s;

    s = "";
    while (s != "EXIT")
    {
        std::cout << "Enter a command : ";
        std::getline(std::cin, s);
        if (s == "ADD")
            phone.add();
        else if (s == "SEARCH")
            phone.search();
    }
    return (0);
}