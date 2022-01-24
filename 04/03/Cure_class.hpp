/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:12:12 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:23:43 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
#define CURE_CLASS_HPP

#include "AMateria_class.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &obj);
		~Cure(void);
		Cure &operator=(Cure const &obj);
		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif
