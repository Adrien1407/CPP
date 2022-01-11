/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:33:55 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 17:35:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = obj;
}
ClapTrap	&ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "assgnation operation called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->Hitpoints = obj.Hitpoints;
		this->EnergyPoints = obj.EnergyPoints;
		this->AttackDamage = obj.AttackDamage;
	}
	return (*this);
}
ClapTrap::ClapTrap(std::string new_name) : name(new_name), Hitpoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "assignation constructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->EnergyPoints >= 5)
	{
		std::cout << "Claptrap " << this->name << " attack " << target << ", causing " << 5 << " points of damage !" << std::endl;
		this->EnergyPoints -= 5;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot attack " << target << " because he only has " << this->EnergyPoints << " Energy Points" << std::endl;

}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage" << std::endl;
	this->Hitpoints -= amount;
	if (this->Hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " get repaired with " << amount << " points" << std::endl;
	this->Hitpoints += amount;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
}












