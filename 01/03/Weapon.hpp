/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:38:26 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/17 11:42:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iomanip>
#include <iostream>
#include <string>

class	Weapon
{
	public :
		Weapon();
		~Weapon();
		const std::string &get_type();
		void set_type(std::string);
	private :
		std::string type;
}

#endif
