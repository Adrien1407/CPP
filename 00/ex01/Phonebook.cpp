/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:34:07 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/07 16:20:34 by adlancel         ###   ########.fr       */
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
void Phonebook::show_contacts()
{
	for (int i = 0; contact_list[i].exist(); i++) {
		std::cout << "contact" << i << std::endl;
	}
}
void Phonebook::search_contact()
{
	std::string buf;
	show_contacts();
	std::cout << "Which index do you want to see?" << std::endl;
	if(!getline(std::cin, buf))
	{
		std::cout << "wrong input" << std::endl;
		return;
	}
	int index = stoi(buf);
	if (contact_list[index].exist())
		contact_list[index].show_details();
	else
		std::cout << "no contact number" << index << std::endl;
}
void Phonebook::add_contact()
{
	Contact new_contact;
	int i;
	i = 0;
	while (contact_list[i].exist())
		i++;
	if (i == 7)
	{
		std::cout << "Phonebook is full, we will replace oldest contact" << std::endl;
		replace_contact(new_contact);
	}
	else
	{
		contact_list[i] = new_contact.set_details();
		//		if (this->oldest_add == -1)
		//			this->oldest_add = 0;
	}

}
void Phonebook::replace_contact(Contact new_contact)
{
	contact_list[this->oldest_add] = new_contact;
	oldest_add++;
}
