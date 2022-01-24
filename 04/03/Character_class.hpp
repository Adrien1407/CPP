/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:45:54 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/24 11:23:06 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP

#include "ICharacter_class.hpp"
#include "AMateria_class.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		~Character(void);
		Character(Character const &obj);
		Character &operator=(Character const &obj);

		std::string const &getName() const;
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
	private:
		std::string	name;
		AMateria	*inventory[4];
};

#endif
