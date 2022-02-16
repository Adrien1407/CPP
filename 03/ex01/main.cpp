/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:04:14 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/15 16:16:01 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

int main()
{
ClapTrap one("bill");

one.attack("jack");
one.attack("jack");
one.beRepaired(10);
one.attack("jack");

ScavTrap two("Scav joe");
two.attack(one.getName());
one.takeDamage(two.getAttackDamage());
two.attack(one.getName());
one.takeDamage(two.getAttackDamage());
two.attack(one.getName());
one.takeDamage(two.getAttackDamage());
two.attack(one.getName());
one.takeDamage(two.getAttackDamage());
one.beRepaired(100);
two.attack(one.getName());
two.guardGate();
}
