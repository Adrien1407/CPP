/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:24:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 18:30:40 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name): ClapTrap(new_name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage= 20;
}
ScavTrap::ScavTrap(ScavTrap const &obj): ClapTrap(obj.name)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = obj; 
}
ScavTrap	&ScavTrap::operator=(ScavTrap const &obj)
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
void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap has entered in Gate keeper mode" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}
