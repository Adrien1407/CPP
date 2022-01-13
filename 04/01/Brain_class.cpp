/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 15:36:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain_class.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;

	for(int i = 0; i < 100; i++)
	{
		if (i % 2)
			this->ideas[i] = "Wrong idea";
		else
			this->ideas[i] = "good idea";
	}
}

Brain::Brain(Brain const &obj)
{
	std::cout << "brain Copy constructor called" << std::endl;
	*this = obj; 
}

Brain &Brain::operator=(Brain const &obj)
{
	std::cout << "brain assignation operation called" << std::endl;
	if (this != &obj)
	{
	for (int i = 0; i < 100; i++) {
			this->ideas[i] = obj.ideas[i];	
	}
	}
	return (*this);
}
std::string	*Brain::get_ideas()
{
	return (this->ideas);
}
std::string	Brain::get_idea(int i)
{
	return (this->ideas[i]);
}
Brain::~Brain()
{
	std::cout << "brain Default destructor called" << std::endl;
}
