/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:37:08 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal_class.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; 
}

Animal &Animal::operator=(Animal const &obj)
{
	std::cout << "assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	Animal::set_type(std::string animal_type)
{
	this->type = animal_type;
}

std::string	Animal::get_type() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
std::cout << "no sound here" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default animal destructor called" << std::endl;
}
