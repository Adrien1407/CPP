/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:47:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat_class.hpp"

Cat::Cat()
{
	this->Animal::type = "Cat";
	std::cout << "cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "cat Copy constructor called" << std::endl;
	*this = obj; 
}

Cat &Cat::operator=(Cat const &obj)
{
	std::cout << "cat assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}

Cat::~Cat()
{
	std::cout << "cat Default destructor called" << std::endl;
}
