/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:04:14 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 18:40:57 by adlancel         ###   ########.fr       */
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
two.attack("bill");
two.guardGate();
}
