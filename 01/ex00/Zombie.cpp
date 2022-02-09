/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:36:32 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/10 14:12:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "constructor called" << std::endl;
}
Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "<" <<this->_name << ">" << "is born" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << "<" <<this->_name << ">" << "is dead" << std::endl;

}
void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::name(std::string name)
{
	this->_name = name;
}
