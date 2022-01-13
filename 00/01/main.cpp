/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:34:10 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/13 13:34:19 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	search_contact(Contact Phonebook, int contact_index)
{

}
void	add_contact(Contact Phonebook)
int	main(int ac, char **av)
{
	int contact_index;
	std::string content;
	Contact Phonebook[10];
	contact_index = 0;


	while (1)
	{
		getline(1, content, "\n");
		if (content == "ADD")
			if (contact_index < 10)
				add_contact(phonebook);
			else
				std::cout << "Phonebook is full" std::endl ;
		if (content == "SEARCH")
		{
			if (contact_index > 0)
				search_contact(Phonebook, contact_index);
			else
				std::cout << "Phonebook is empty" std::endl ;
		}
		if (content == "EXIT")
			break ;
	}
}
