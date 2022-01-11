/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:04:14 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 16:17:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"


int main()
{
ClapTrap one("bill");
one.attack("paul");

ScavTrap two("joe");
two.attack("jack");
two.guardGate();

FragTrap three("bob");
three.attack("bill");
three.highFivesGuys();

DiamondTrap four("jim");
four.attack("al");
four.whoAmI();
}
