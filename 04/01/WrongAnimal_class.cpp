/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:46:10 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal_class.hpp"

WrongAnimal::WrongAnimal() : type("wrong type")
{
	std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; 
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
	std::cout << "assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
std::cout << "No sound" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal Default destructor called" << std::endl;
}
