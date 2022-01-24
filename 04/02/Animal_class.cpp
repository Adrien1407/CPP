/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/12 11:23:21 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal_class.hpp"

Animal::Animal() : type("no type")
{
	std::cout << "animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal Copy constructor called" << std::endl;
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

std::string	Animal::get_type() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Default animal destructor called" << std::endl;
}
