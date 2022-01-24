/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:48:07 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:45:52 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

#include "IMateriaSource_class.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const &obj);
		MateriaSource &operator=(MateriaSource const &obj);
		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const &type);
	private:
		AMateria *source[4];
		int max;
};

#endif
