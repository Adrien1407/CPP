/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:29:20 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:23:28 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure_class.hpp"

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure default constructor called;" << std::endl;
}
Cure::Cure(std::string const &type)
{
	(void) type;
	std::cout << "Cure constructor called" << std::endl;
}
Cure::Cure(Cure const &obj) : AMateria(obj)
{
	std::cout << "Cure copy constructor called" << std::endl;
}
Cure &Cure::operator=(Cure const &obj)
{
	(void) obj;
	std::cout << "assignation Cure constructor called" << std::endl;
	return(*this);
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called;" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}
void	Cure::use(ICharacter &target)
{
std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
