/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:07:31 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/07 16:18:45 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact()
{
	this->exists = 1;
}
Contact::~Contact()
{
}
void Contact::show_details()
{
	std::cout << "hello" << std::endl;
}
Contact &Contact::set_details()
{
	std::string content;

	std::cout << "First Name?" << std::endl;
	if (getline(std::cin, content))
		this->first_name = content;
	else
		std::cout << "wrong input" << std::endl;
	std::cout << "Last Name?" << std::endl;
	if (getline(std::cin, content))
		this->last_name = content;
	else
		std::cout << "wrong input" << std::endl;
	std::cout << "Nick Name?" << std::endl;
	if (getline(std::cin, content))
		this->nickname = content;
	else
		std::cout << "wrong input" << std::endl;
	std::cout << "Phone Number?" << std::endl;
	if (getline(std::cin, content))
		this->phone_number = content;
	else
		std::cout << "wrong input" << std::endl;
	std::cout << "Darkest secret?" << std::endl;
	if (getline(std::cin, content))
		this->darkest_secret = content;
	else
		std::cout << "wrong input" << std::endl;
	std::cout << "Contact added !" << std::endl;
	return (*this);
}
bool				Contact::exist()
{
	if (this->exists == 1)
		return (true);
	else
		return (false);

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
