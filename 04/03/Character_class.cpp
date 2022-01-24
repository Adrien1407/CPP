/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:45:54 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:22:51 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character_class.hpp"

Character::Character() : name("")
{
	std::cout << "Character default constructor called;" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}
Character::Character(std::string name) : name(name)
{
	std::cout << "Character default constructor called;" << std::endl;
	for (int i = 0 ; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << "default destructor called;" << std::endl;
	for (int i = 0 ; i < 4; i++) {
		if(this->inventory[i])
			delete this->inventory[i];
	}
}

Character &Character::operator=(Character const &obj)
{
	std::cout << "assignation character constructor called;" << std::endl;
	this->name = obj.name;
	for (int i = 0; i < 4; i++) {
		if(!this->inventory[i])
			this->inventory[i] = obj.inventory[i];
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}
void Character::equip(AMateria* m)
{
	int i = 0;
	while (this->inventory[i])
		i++;
	if (m)
		this->inventory[i] = m;
}
void Character::unequip(int idx)
{
	if((idx >= 0 && idx < 4) && this->inventory[idx])
		this->inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
	if((idx >= 0 && idx < 4) && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Can't use this materia" << std::endl;
}
