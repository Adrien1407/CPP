/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:07:31 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/08 19:06:26 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact()
{
	this->exists = 0;
}
Contact::~Contact()
{
}


void Contact::show_all_details(int i)
{
	if (this->exist())
	{
		std::cout << std::setw(10) << " KEY|" << " VALUE" <<std::endl;
		std::cout << std::setw(10) <<  "index|"
			<< i <<std::endl;
		std::cout <<std::setw(10) << "firstname|"
			<<this->get_first_name() << std::endl;
		std::cout << std::setw(10) << "lastname|"
			<<this->get_last_name() << std::endl;
		std::cout <<std::setw(10) <<"nickname|"
			<<this->get_nickname() << std::endl;
		std::cout <<std::setw(10) <<"secret|" 
			<<this->get_darkest_secret() << std::endl;
		std::cout <<std::setw(10) << "Phone|"
			<<this->get_phone_number()
			<< std::endl;
	}
	else
		std::cout << "no contact Number " << i << std::endl;
}


std::string Contact::format(std::string str)
{
	std::string buf;

	if(str.length() > 9)
	{
		buf = str.substr(0, 9).append(".");
	}
	else
		buf = str;
	return (buf);
}
void Contact::show_details()
{
	std::cout << "|"<< std::setw(10) << format(this->get_first_name()) << "|";
	std::cout << std::setw(10) << format(this->get_last_name()) << "|";
	std::cout << std::setw(10) << format(this->get_nickname()) << "|";

	std::cout << std::endl;
}
void	Contact::set_details()
{
	std::string content;

	std::cout << "First Name?" << std::endl;
	getline(std::cin, content);
	this->first_name = content;
	std::cout << "Last Name?" << std::endl;
	getline(std::cin, content);
	this->last_name = content;
	std::cout << "Nick Name?" << std::endl;
	getline(std::cin, content);
	this->nickname = content;
	std::cout << "Phone Number?" << std::endl;
	getline(std::cin, content);
	this->phone_number = content;
	std::cout << "Darkest secret?" << std::endl;
	getline(std::cin, content);
	this->darkest_secret = content;
	if (this->darkest_secret == "" || this->phone_number == ""|| this->first_name == ""|| this->last_name == ""|| this->nickname == "")
	{
		std::cout << "you cant leave blank fields" << std::endl;
		set_details();
	}
	else
	{
		std::cout << "Contact added !" << std::endl;
		this->exists++;
	}
}
bool				Contact::exist()
{
	return(this->exists == true);
}
std::string const	Contact::get_first_name()
{
	return (this->first_name);
}
std::string const	Contact::get_last_name()
{
	return (this->last_name);
}
std::string const	Contact::get_nickname()
{
	return (this->nickname);
}
std::string const	Contact::get_phone_number()
{
	return (this->phone_number);
}
std::string const	Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}
