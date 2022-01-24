/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:39:50 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:30:59 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

#include <iostream>

#include "ICharacter_class.hpp"
class ICharacter;

class AMateria
{
	public:
		AMateria();
		~AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &obj);
		AMateria &operator=(AMateria const &obj);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string type;
};

#endif
