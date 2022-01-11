/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:10:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/07 12:40:08 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact {
	public:
		bool	set_first_name(std::string);
		bool	set_last_name(std::string);
		bool	set_nickname(std::string);
		bool	set_phone_number(std::string);
		bool	set_darkest_secret(std::string);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

class Phonebook {
	public :
		Contact contact_list[8];
};
bool	Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	return (true);
}
bool	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	return (true);
}
bool	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	return (true);
}
bool	Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
	return (true);
}
bool	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
	return (true);
}

#endif
