/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:03:56 by felhafid          #+#    #+#             */
/*   Updated: 2024/12/22 15:46:59 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
class Contact{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;
    public:
    void    set_first_name(std::string s);
    std::string get_first_name();
    void    set_last_name(std::string s);
    std::string get_last_name();
    void    set_nickname(std::string s);
    std::string get_nickname();
    void    set_phone_number(std::string s);
    std::string get_phone_number();
    void    set_secret(std::string s);
    std::string get_secret();
    Contact();
    ~Contact();
};
#endif