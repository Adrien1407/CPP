/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:10:48 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/08 19:06:51 by adlancel         ###   ########.fr       */
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
		void	add_contact();
		void	search_contact();
		void	show_contacts();
		void	replace_contact(Contact new_contact);
	private:
		int oldest_add;
		Contact contact_list[8];
};

#endif
