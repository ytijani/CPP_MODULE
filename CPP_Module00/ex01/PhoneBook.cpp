/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:09:37 by ytijani           #+#    #+#             */
/*   Updated: 2022/12/19 19:31:56 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int Phonebook::count = 0, Phonebook::vcount = 0;

void    check_empty(std::string name, std::string data)
{
    while(name.empty())
    {
        std::cout<<YELLOW<<"Enter your "<<data<<" : ";
        getline(std::cin, name);
    }
}

void    Phonebook::check_str()
{
    if (std::cin.eof())
        exit(0);
}

void    Phonebook::add()
{
    std::string name;
    int         index;

    if (count > 7)
        count = 0;
    std::cout<<YELLOW<<"Enter your firstname : ";
    getline(std::cin, name);
    check_str();
    check_empty(name, "firstname");
    this->_Contact[count].set_firstname(name);
    std::cout<<YELLOW<<"Enter your lastname : ";
    getline(std::cin, name);
    check_str();
    check_empty(name, "lasttname");
    this->_Contact[count].set_lastname(name);
    std::cout<<YELLOW<<"Enter your nickname : ";
    getline(std::cin, name);
    check_str();
    check_empty(name, "nickname");
    this->_Contact[count].set_nickname(name);
    std::cout<<YELLOW<<"Enter your PhoneNummber : ";
    getline(std::cin, name);
    check_str();
    index = atoi(name.c_str());
    while(index == 0)
    {
        std::cout<<RED<<"invalid"<<std::endl;
        std::cout<<YELLOW<<"Enter your PhoneNummber : ";
        getline(std::cin, name);
        check_str();
        index = atoi(name.c_str());
    }
    check_empty(name, "PhoneNummber");
    this->_Contact[count].set_phonenumber(name);
    std::cout<<YELLOW<<"Enter your darkestsecret : ";
    getline(std::cin, name);
    check_str();;
    check_empty(name, "darkestsecret");
    this->_Contact[count].set_darkest_secret(name);
    count++;
    if (vcount >= count)
        vcount = 8;
    else
        vcount++;
}

void    print_name(std::string name)
{
    if (name.length() > 10)
      name = name.substr(0, 9) + '.';
    std::cout<<std::setw(10)<<name<<"|";
}

void    Phonebook::print_contact()
{
    int i = 0;
    std::string name;
    while(i < vcount)
    {
        std::cout<<i;
        std::cout<<" |";
        print_name(this->_Contact[i].get_firstname());
        print_name(this->_Contact[i].get_lastname());
        print_name(this->_Contact[i].get_nickname());
        print_name(this->_Contact[i].get_phonenumber());
        print_name(this->_Contact[i].get_darkest_secret());
        std::cout<<std::endl;
        i++; 
    }
}

void    Phonebook::search()
{
    std::string name;
    int index;
    this->print_contact();
    std::cout<<YELLOW<<"Enter You Index : ";
    getline(std::cin, name);
    if (std::cin.eof())
        exit(0);
    index = atoi(name.c_str());
    while(index < 0 || index >= count || !isdigit(name[0]))
    {
        std::cout<<RED<<"invalid index"<<std::endl;
        std::cout<<YELLOW<<"Enter You Index : ";
        getline(std::cin, name);
        if (std::cin.eof())
            exit(0);
        index = atoi(name.c_str());
    }
    std::cout<<index<<" | ";
    std::cout<<std::setw(10)<<this->_Contact[index].get_firstname()<<" | ";
    std::cout<<std::setw(10)<<this->_Contact[index].get_lastname()<<" | ";
    std::cout<<std::setw(10)<<this->_Contact[index].get_nickname()<<" | ";
    std::cout<<std::endl;
}

void    Phonebook::help_print()
{
    std::cout<<RED<<"*****************_YOUR PHONEBOOK_*******************"<<std::endl;
    std::cout<< RED<<"- "<<BLUE<< "ADD : To add new phonebook "<<std::endl;
    std::cout<< RED<<"- " <<BLUE << "SEARCH : To search in phonebook"<<std::endl;
    std::cout<< RED<<"- "<<BLUE <<"EXIT : To leave "<<std::endl<<std::endl;
}

int main()
{
    std::string name;
    Phonebook book;
    book.help_print();
    while(1)
    {
        std::cout<<GREEN<<"Enter Your Command : ";
        std::getline(std::cin, name);
        if (std::cin.eof())
            break ;
        if (name == "ADD")
            book.add();
        else if (name == "SEARCH")
            book.search();
        else if (name == "EXIT")
        {
            std::cout<<RED<<"exit successfully"<<std::endl;
            exit(0);
        }
        else 
            std::cout<<RED<<"invalid command"<<std::endl;
    }
}