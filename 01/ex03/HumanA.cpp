/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:24:27 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 14:48:14 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme) : _name(name), arme(arme)
{
	std::cout << this->_name << "grab a" << this->arme.getType() << std::endl;
}
HumanA::~HumanA()
{

}
void	HumanA::attack()
{
	std::cout << this->_name << "attacks with" << this->arme.getType() << std::endl;

}
