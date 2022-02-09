/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:22:45 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 15:39:42 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "default contuctor weapon" << std::endl;

}
Weapon::~Weapon()
{
	std::cout << "default destructor weapon" << std::endl;

}
Weapon::Weapon(std::string type)
{
	std::cout << "constructor weapon" << std::endl;
	this->_type = type;
}
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
const std::string &Weapon::getType()
{
	return (this->_type);
}
