/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:38:01 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/10 14:24:36 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>


class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	name(std::string name);
	private:
		std::string _name;
};

void randomChump(std::string name);
Zombie*	newZombie(std::string name);
#endif

