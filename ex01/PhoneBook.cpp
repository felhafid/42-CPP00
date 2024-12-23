/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:26:55 by felhafid          #+#    #+#             */
/*   Updated: 2024/12/22 15:40:05 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	std::cout << " Welcome to My Awesome PhoneBook! " << std::endl;
	std::cout << " Available commands : ADD, SEARCH, EXIT \n" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << " Thank you for using PhoneBook! " << std::endl;
}

std::string	store_data(std::string msg)
{
	std::string	s;
	while (s == "")
	{
		std::cout << msg;
		std::getline(std::cin, s);
		if (s.find("	") != std::string::npos)
			s = "";
	}
	return (s);
}

void	PhoneBook::add()
{
	std::string s;
	static int the_old_one;
	
	if (i == 8)
	{
		the_old_one--;
		if (the_old_one == 0)
			the_old_one = 8;
	}
	s = store_data("Enter the fist name : ");
	ar[i - the_old_one].set_first_name(s);
	s = store_data("Enter the last name : ");
	ar[i - the_old_one].set_last_name(s);
	s = store_data("Enter the nickname  : ");
	ar[i - the_old_one].set_nickname(s);
	s = store_data("Enter the phone number : ");
	ar[i - the_old_one].set_phone_number(s);
	s = store_data("Enter a secret   : ");
	ar[i - the_old_one].set_secret(s);
	if (i != 8)
	{
		i++;
		if (i == 8)
			the_old_one = 9;
	}
}

std::string	add_space(int len, std::string s)
{
	std::string replace;
	
	if (len < 10)
	{
		while (len < 10)
		{
			std::cout << " ";
			len++; 
		}
		return (s);
	}
	else if (len > 10)
		replace = s.substr(0, 9) + '.'; 
	else
		return (s);
	return (replace);
}

void    PhoneBook::search()
{
	int j = 0;
	int len;
	std::string indix;
	
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|     Indix|First Name| Last Name|  NickName|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (ar[0].get_first_name() == "")
	{
		std::cout << "\nThe PhoneBook is empty." << std::endl;
		return ;		
	}
	while (j < i)
	{
		std::cout << "|         " << j + 1 << "|";
		len = ar[j].get_first_name().size();
		indix = add_space(len, ar[j].get_first_name());
		std::cout << indix << "|";
		len = ar[j].get_last_name().size();
		indix = add_space(len, ar[j].get_last_name());
		std::cout << indix << "|";
		len = ar[j].get_nickname().size();
		indix = add_space(len, ar[j].get_nickname());
		std::cout << indix << "|" <<std::endl;
		std::cout << "|___________________________________________|" << std::endl;
		j++;
	}
	while (1)
	{
		std::cout << "Select an index : ";
		std::getline(std::cin, indix);
		if (indix.size() == 1 && indix[0] - 48 <= 8 && indix[0] - 48  >= 1 && indix[0] - 48 <= i)
			break ;
		else
			std::cout << "Invalid Indix\n";	
	}
	std::cout << "First name is : " <<  ar[(indix[0]  - 48) - 1].get_first_name() << std::endl; 
	std::cout << "Last name is : " <<  ar[(indix[0]  - 48) - 1].get_last_name() << std::endl; 
	std::cout << "Nickname is : " <<  ar[(indix[0]  - 48) - 1].get_nickname() << std::endl;   
	std::cout << "Phone number is : " <<  ar[(indix[0]  - 48) - 1].get_phone_number() << std::endl;  
	std::cout << "Secret is : " <<  ar[(indix[0]  - 48) - 1].get_secret() << std::endl;	
}
