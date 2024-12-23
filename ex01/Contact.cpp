/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:00:23 by felhafid          #+#    #+#             */
/*   Updated: 2024/12/22 18:36:52 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_first_name(std::string s)
{
   first_name = s;
}

Contact::Contact()
{
}

std::string Contact::get_first_name()
{
   return (first_name);
}

void    Contact::set_last_name(std::string s)
{
   last_name = s;
}

std::string Contact::get_last_name()
{
   return (last_name);
}

void    Contact::set_nickname(std::string s)
{
   nickname = s;
}

std::string Contact::get_nickname()
{
   return (nickname);
}

void    Contact::set_phone_number(std::string s)
{
   phone_number = s;
}

std::string Contact::get_phone_number()
{
   return (phone_number);
}

void    Contact::set_secret(std::string s)
{
   secret = s;
}

std::string Contact::get_secret()
{
   return (secret);
}

Contact::~Contact()
{
}
