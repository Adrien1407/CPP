/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:18:08 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/16 19:23:49 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
	int n;
	n = 8;
	Zombie *Zombies = zombieHorde(n, "Manu");
	for (int i = 0; i < n; i++)
		Zombies[i].announce();
	delete [] Zombies;
	return (0);
}
