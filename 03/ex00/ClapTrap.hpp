/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:30:05 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/15 14:41:38 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &obj);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &obj);
		const std::string getname();
		unsigned int getAttackDamage();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
private:

		std::string name;
		unsigned int Hitpoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
};
#endif
