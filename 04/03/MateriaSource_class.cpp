/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:48:07 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:43:58 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource_class.hpp"

MateriaSource::MateriaSource() :max(0)
{
	std::cout << "default constructor called;" << std::endl;
	for(int i = 0; i < 4; i++)
		this->source[i] = 0;
}
MateriaSource::MateriaSource(MateriaSource const &obj)
{
	std::cout << "Materiasource default constructor called;" << std::endl;
	for(int i = 0; i < obj.max; i++)
		this->learnMateria(obj.source[i]->clone());
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
	std::cout << "Materiasource assignation constructor called;" << std::endl;
	this->max = 0;
	for (int i = 0; i < obj.max; i++) {
		this->learnMateria(obj.source[i]->clone());
	}
	return(*this);
}
AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->max; i++) {
		if (this->source[i]->getType()== type)
			return (this->source[i]->clone());
	}
	return (NULL);
}
void	MateriaSource::learnMateria(AMateria* materia)
{
	if (this->max == 4 || materia == 0)
		return ;
	this->source[this->max++] = materia;
}
MateriaSource::~MateriaSource()
{
	std::cout << "Materia source default destructor called;" << std::endl;
	for (int i = 0; i < max; i++) {
		delete source[i];
	}
}
