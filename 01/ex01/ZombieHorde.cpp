/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:28:42 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/14 12:26:26 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
if (n > 0)
{
Zombie *zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombies[i].set_name(name);
	return (zombies);
}
return (NULL);
}
