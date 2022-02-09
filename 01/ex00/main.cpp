/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:50:50 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/08 18:18:20 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
	int i;
	//Zombie *zombies = new Zombie[7];
	Zombie stackZombie("stackzombie");
	stackZombie.announce();

	Zombie *heapZombie = newZombie("heapzombie");
	heapZombie->announce();

	delete heapZombie;

/*

	std::string names[8] = {"ad", "jo", "will", "bill", "bernard", "christian", "albert", "phil"};

	Zombie *eight[7] = newZombie(names[7]);
	i = -1;
	while (++i < 7)
	{
	zombies[i].name(names[i]);
	zombies[i].announce();
	}
	delete (eight);
	i = -1;
	*/

	randomChump("lulu");
return (0);
}
