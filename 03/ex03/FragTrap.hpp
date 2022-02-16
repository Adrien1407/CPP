/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:30:16 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 11:55:47 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string new_name);
		FragTrap(FragTrap const &obj);
		~FragTrap();
		FragTrap &operator=(FragTrap const &obj);
		void	highFivesGuys();
	private:
};

#endif
