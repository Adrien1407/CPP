/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:34:07 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/08 19:01:29 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->oldest_add = -1;
}
Phonebook::~Phonebook()
{

}
void Phonebook::search_contact()
{
	std::string buf;
	int i;
	i = 0;
		std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "firstname" <<"|"<< std::setw(10) << "lastname" << "|" << std::setw(10) << "nickname" << "|"<< std::endl;
	while (contact_list[i].exist())
	{
		std::cout << "|" << std::setw(10) << i; 
		contact_list[i].show_details();
		i++;
	}
	std::cout << "Which index do you want to see?" << std::endl;
	if(!getline(std::cin, buf))
	{
		std::cout << "wrong input" << std::endl;
		return;
	}
	try 
	{
		int index = stoi(buf);
		contact_list[index].show_all_details(index);
	}
	catch (std::exception &e)
	{
		std::cout << "not a valid index" << std::endl;
	}
}
void Phonebook::add_contact()
{
	Contact new_contact;
	int i;
	i = 0;
	while (contact_list[i].exist())
	{
		i++;
	}
	if (i == 8)
	{
		std::cout << "Phonebook is full, we will replace oldest contact" << std::endl;
		new_contact.set_details();
		replace_contact(new_contact);
	}
	else
	{
		new_contact.set_details();
		contact_list[i] = new_contact;
		if (this->oldest_add == -1)
			this->oldest_add = 0;
	}

}
void Phonebook::replace_contact(Contact new_contact)
{
	contact_list[this->oldest_add] = new_contact;
	oldest_add++;
}
