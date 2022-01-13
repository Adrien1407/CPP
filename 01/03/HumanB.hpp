/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:42:35 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/20 11:54:32 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "./Weapon.hpp"

class	HumanB {

	public:
		HumanB();
		~HumanB();
		void attack();
	private:
		Weapon &arme;
		std::string name;
}
#endif
