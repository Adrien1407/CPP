/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:04:54 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/07 16:18:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
	public:
		Contact();
		~Contact();
		bool				exist();
		Contact				&set_details();
		void				show_details();
		std::string const	get_first_name();
		std::string const	get_last_name();
		std::string	const	get_nickname();
		std::string	const	get_phone_number();
		std::string	const	get_darkest_secret();
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int			exists;
};

#endif
