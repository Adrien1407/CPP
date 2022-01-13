/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 17:31:24 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog_class.hpp"

Dog::Dog()
{
	this->Animal::type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = obj; 
}

Dog &Dog::operator=(Dog const &obj)
{
	std::cout << "Dog assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound() const
{
std::cout << "Woaf Woaf" << std::endl;
}
