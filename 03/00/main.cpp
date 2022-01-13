/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:04:14 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/09 17:37:20 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main()
{
ClapTrap one("bill");
ClapTrap two("jack");

one.attack("jack");
two.takeDamage(5);
one.attack("jack");
two.takeDamage(5);
one.beRepaired(10);
one.attack("jack");
}
