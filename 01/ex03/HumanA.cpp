/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:24:27 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/14 12:29:26 by adlancel         ###   ########.fr       */
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
if (!this->arme.getType().empty())
	std::cout << this->_name << "attacks with" << this->arme.getType() << std::endl;
else
	std::cout << this->_name << "cannot attack without weapon"<< std::endl;

}
