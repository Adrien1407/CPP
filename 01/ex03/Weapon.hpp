/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:38:26 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 15:38:37 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Weapon
{
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string &getType();
		void setType(const std::string type);
	private :
		std::string _type;
};

#endif
