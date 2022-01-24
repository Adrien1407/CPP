/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:42:17 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:30:43 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria_class.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	this->type = type;
}
AMateria::AMateria(AMateria const &obj)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	this->type = obj.type;
}
AMateria &AMateria::operator=(AMateria const &obj)
{
	if (this != &obj)
	{
		this->type =obj.type;
	}
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}
void	AMateria::use(ICharacter&)
{
}

AMateria::~AMateria()
{
	std::cout << "AMateria Default destructor called" << std::endl;
}
