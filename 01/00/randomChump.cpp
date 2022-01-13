/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:07:07 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/08 14:10:11 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./Zombie.hpp"

void randomChump( std::string name )
{
	Zombie z(name);
	z.announce();
}
