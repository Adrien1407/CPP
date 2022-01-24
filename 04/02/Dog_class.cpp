/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 17:26:59 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog_class.hpp"

Dog::Dog()
{
	std::cout << "dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &obj)
{
	std::cout << "dog Copy constructor called" << std::endl;
	*this = obj; 
	this->brain = new Brain(*obj.brain);
}

Dog &Dog::operator=(Dog const &obj)
{
	std::cout << "dog assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}
void	Dog::makeSound() const
{
	std::cout << "Woaf Woaf" << std::endl;
}
Brain	&Dog::getBrain()
{
	return (*brain);
}
Dog::~Dog()
{
	delete this->brain;
	std::cout << "dog Default destructor called" << std::endl;
}
