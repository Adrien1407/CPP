/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:13:05 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/16 19:16:07 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie {

	public :
		Zombie();
		Zombie(std::string);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string);

	private :
		std::string name;
};
Zombie	*zombieHorde(int n, std::string name);

#endif
