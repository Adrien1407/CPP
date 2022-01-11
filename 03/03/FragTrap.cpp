/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:24:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 11:58:52 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(std::string new_name): ClapTrap(new_name)
{
	std::cout << "Fragtrap constructor called" << std::endl;
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage= 30;
}
FragTrap::FragTrap(FragTrap const &obj): ClapTrap(obj.name)
{
	std::cout << "Fragtrap copy constructor called" << std::endl;
	*this = obj; 
}
FragTrap	&FragTrap::operator=(FragTrap const &obj)
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
void	FragTrap::highFivesGuys()
{
	std::cout << "High Fives !" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Fragtrap destructor called" << std::endl;
}
