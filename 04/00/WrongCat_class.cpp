/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:46:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat_class.hpp"

WrongCat::WrongCat() 
{
	this->type = "WrongCat";
	std::cout << "wrongcat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "cat Copy constructor called" << std::endl;
	*this = obj; 
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
	std::cout << "cat assignation operation called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
void	WrongCat::makeSound() const
{
	std::cout << "beeeeeeeeeeeeeeeeeeeeeh" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat Default destructor called" << std::endl;
}
