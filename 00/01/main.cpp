/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:09:43 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/13 13:38:15 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.hpp"

Contact	add_contact(void)

{
	Contact	new_contact;
	std::string content;

	std::cout << "First Name?" << std::endl;
	getline(std::cin, content);
	new_contact.set_first_name(content);
	std::cout << "Last Name?" << std::endl;
	getline(std::cin, content);
	new_contact.set_last_name(content);
	std::cout << "Nick Name?" << std::endl;
	getline(std::cin, content);
	new_contact.set_nickname(content);
	std::cout << "Phone Number?" << std::endl;
	getline(std::cin, content);
	new_contact.set_phone_number(content);
	std::cout << "Darkest secret?" << std::endl;
	getline(std::cin, content);
	new_contact.set_darkest_secret(content);
	std::cout << "Contact added !" << std::endl;
	return (new_contact);
}
std::string	format(std::string content)
{
	std::string formated_string;
	int spaces;

	spaces = 10 - content.length();
	if (content.length() > 10)
	{
		formated_string = content.substr(0, 9);
		formated_string.append(".");
	}
	else
	{
		formated_string = content;
		formated_string.insert(0, spaces, ' ');
	}
	return (formated_string);
}
void	search_contact(Phonebook p, int numb_of_contacts)
{
	std::string buf;
	int			index;
	int i;

	i = -1;
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|     index| last name|first_name|  nickname|     phone|"  << std::endl;
	while (++i < numb_of_contacts)
	{
		std::cout << "|         " << i;
		std::cout << "|" << format(p.contact_list[i].last_name);
		std::cout << "|" << format(p.contact_list[i].first_name);
		std::cout << "|" << format(p.contact_list[i].nickname);
		std::cout << "|" << format(p.contact_list[i].phone_number);
		std::cout << "|" << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Would you like to search for a specific contact? insert index " << std::endl;
	getline(std::cin, buf);
	try {
		index = std::stoi(buf);
	}
	catch (const std::invalid_argument) {
		std::cerr << "Wrong answer!" << '\n';
		return ;
	}
	if(index >= 0 && index < 8 && !p.contact_list[index].last_name.empty())
	{
		std::cout << "-------------------------------------------------------------------" << std::endl;
		std::cout << "|     index| last name|first_name|  nickname|     phone|    secret|"  << std::endl;
		std::cout << "|         " << index;
		std::cout << "|" << format(p.contact_list[index].last_name);
		std::cout << "|" << format(p.contact_list[index].first_name);
		std::cout << "|" << format(p.contact_list[index].nickname);
		std::cout << "|" << format(p.contact_list[index].phone_number);
		std::cout << "|" << format(p.contact_list[index].darkest_secret);
		std::cout << "|" << std::endl;
		std::cout << "-------------------------------------------------------------------" << std::endl;
	}
}
int main(int ac, char **av)
{
	int index;
	std::string cmd;
	Phonebook	p;
	
	(void) av;
	(void) ac;

	index = 0;
	std::cout << "Welcome to the shittiest Phonebook ever !" << std::endl;
	std::cout << "do you want to \"ADD\" a contact or \"SEARCH\" for a contact? (\"EXIT\" to quit)" << std::endl;

	while (1)
	{
		getline(std::cin, cmd);

		if (cmd == "ADD")
		{
			if (index < 8)
			{
				p.contact_list[index] = add_contact();
				index++;
				std::cout << "Phonebook >";
			}
			else
				std::cout << "The phonebook is full !" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			if (index > 0)
			{
				search_contact(p, index);
				std::cout << "Phonebook >";
			}
			else
				std::cout << "The phonebook is empty!" << std::endl;
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Bye !" << std::endl;
			break;
		}
		else
		{
			std::cout << "Wrong answer!" << std::endl;
			std::cout << "Phonebook >";
		}
	}
	return (0);
}
