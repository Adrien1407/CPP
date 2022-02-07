/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:10:48 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/07 15:04:47 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include  "Contact.hpp"

class Phonebook{
	public :
	Phonebook();
	~Phonebook();
		Contact contact_list[8];
		void	add_contact();
		void	search_contact();
		void	show_contacts();
		void	replace_contact(Contact new_contact);
	private:
		int oldest_add;
};

#endif
