/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:50:50 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/10 15:58:32 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
	int i;
	Zombie *zombies = new Zombie[7];
	std::string names[8] = {"ad", "jo", "will", "bill", "bernard", "christian", "albert", "phil"};
	Zombie *eight = newZombie(names[7]);
	i = -1;
	while (++i < 7)
	{
	zombies[i].name(names[i]);
	zombies[i].announce();
	}
	delete (eight);
	i = -1;
	delete [] zombies;
	randomChump("lulu");
return (0);
}
