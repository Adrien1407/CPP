/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:30:16 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/15 16:21:16 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string new_name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const &obj);
		void	attack(std::string const &target);
		void	guardGate();
	private:
};

#endif
