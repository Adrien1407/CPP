/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:29:20 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:24:25 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice_class.hpp"

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice default constructor called;" << std::endl;
}
Ice::Ice(std::string const &type)
{
	(void) type;
	std::cout << "Ice constructor called" << std::endl;
}
Ice::Ice(Ice const &obj) : AMateria(obj)
{
	std::cout << "Ice copy constructor called" << std::endl;
}
Ice &Ice::operator=(Ice const &obj)
{
	(void) obj;
	std::cout << "assignation ice constructor called" << std::endl;
	return(*this);
}

Ice::~Ice()
{
	std::cout << "ice default destructor called;" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}
void	Ice::use(ICharacter &target)
{
std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
