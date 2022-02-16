/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:30:16 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 16:17:45 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:
		DiamondTrap();
		DiamondTrap(std::string new_name);
		DiamondTrap(DiamondTrap const &obj);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &obj);
		void	whoAmI(void);
		void	attack(std::string const &target);
	private:
		std::string name;
};

#endif
