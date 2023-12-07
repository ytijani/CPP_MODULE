/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:21:00 by ytijani           #+#    #+#             */
/*   Updated: 2022/12/18 13:16:23 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private :
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkest_secret;
    public :
        void    set_firstname(std::string fristname);
        void    set_lastname(std::string lastname);
        void    set_nickname(std::string nickname);
        void    set_phonenumber(std::string phonenumber);
        void    set_darkest_secret(std::string darkest_secret);

        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkest_secret();
        
};
#endif