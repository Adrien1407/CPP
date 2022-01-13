/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 17:29:41 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat_class.hpp"

Cat::Cat() 
{
	std::cout << "cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &obj)
{
	std::cout << "cat Copy constructor called" << std::endl;
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
}

Cat &Cat::operator=(Cat const &obj)
{
	std::cout << "cat assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}
void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}
Brain	&Cat::getBrain()
{
	return (*brain);
}
Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat Default destructor called" << std::endl;
}
