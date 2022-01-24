/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:29:20 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:24:43 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP

#include "./AMateria_class.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &obj);
		~Ice(void);
		Ice &operator=(Ice const &obj);
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
