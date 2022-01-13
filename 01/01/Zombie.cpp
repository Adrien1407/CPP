/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:03:52 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/16 19:13:44 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie()
{
	std::cout <<"Constructor called"<< std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "<" << this->name << ">" << " is born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" <<  this->name << ">" << "is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::set_name(std::string name)
{
	this->name = name;
}

