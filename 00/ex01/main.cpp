/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:09:43 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/07 15:33:08 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void)
{
	Phonebook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "USE SEARCH/ADD/EXIT" << std::endl;
		if (getline(std::cin, input))
		{
			if (input == "EXIT")
			{
				std::cout << "Bye :)" << std::endl;
				return (0);
			}
			else if (input == "ADD")
				phonebook.add_contact();
			else if (input == "SEARCH")
			{
				phonebook.show_contacts();
				phonebook.search_contact();
			}
		}
		else
			std::cout << "invalid command" << std::endl;
	}
	return (0);
}
