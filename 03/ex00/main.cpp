/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:04:14 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/15 15:57:06 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main()
{
ClapTrap one("bill");
ClapTrap two("jack");

one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.attack(two.getname());
two.takeDamage(one.getAttackDamage());
one.beRe
}
