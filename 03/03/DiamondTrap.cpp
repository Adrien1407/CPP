/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:24:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:26:42 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string new_name):ClapTrap(new_name), FragTrap(new_name), ScavTrap(new_name)
{
	std::cout << "Diamondtrap constructor called" << std::endl;
	this->Hitpoints = this->FragTrap::Hitpoints;
	this->EnergyPoints = this->ScavTrap::EnergyPoints;
	this->AttackDamage = this->FragTrap::AttackDamage;
	this->ClapTrap::name = new_name + "_clap_name";
	this->name = new_name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj): ClapTrap(obj.name), FragTrap(obj.name), ScavTrap(obj.name)
{
	std::cout << "Diamondtrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &obj)
{
	std::cout << "assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->Hitpoints = obj.Hitpoints;
		this->EnergyPoints = obj.EnergyPoints;
		this->AttackDamage = obj.AttackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamondtrap destructor called" << std::endl;
}
void	DiamondTrap::whoAmI()
{
std::cout << "DiamondTrap name: " << this->name << " and ClapTrap_name: " << this->ClapTrap::name << std::endl;
}
