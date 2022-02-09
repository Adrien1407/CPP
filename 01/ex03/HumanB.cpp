/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:24:27 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 14:56:23 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _arme(NULL)
{
std::cout << this->_name << "hasn't grabbed any weapon yet" << std::endl;
}
HumanB::~HumanB()
{

}
void	HumanB::attack()
{
std::cout << this->_name << "attacks with" << this->_arme->getType() << std::endl;

}
void	HumanB::setWeapon(Weapon &arme)
{
this->_arme = &arme;
std::cout << this->_name << " grab a " << this->_arme->getType() <<  std::endl;

}
