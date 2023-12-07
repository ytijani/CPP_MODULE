/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:39:09 by ytijani           #+#    #+#             */
/*   Updated: 2022/12/18 13:18:09 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Contact::set_firstname(std::string name)
{
    this->_firstname = name;
}

void    Contact::set_lastname(std::string name)
{
    this->_lastname = name;
}

void    Contact::set_nickname(std::string name)
{
    this->_nickname = name;
}

void    Contact::set_phonenumber(std::string phonenumber)
{
    this->_phonenumber = phonenumber;
}

void    Contact::set_darkest_secret(std::string name)
{
    this->_darkest_secret = name;
}

std::string Contact::get_firstname()
{
    return (_firstname);
}

std::string Contact::get_lastname()
{
    return (_lastname);
}

std::string Contact::get_nickname()
{
    return (_nickname);
}

std::string Contact::get_phonenumber()
{
    return (_phonenumber);
}

std::string Contact::get_darkest_secret()
{
    return (_darkest_secret);
}