/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:42:35 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 14:53:51 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "./Weapon.hpp"

class	HumanB {

	public:
		HumanB(const std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &arme);
	private:
		Weapon *_arme;
		std::string _name;
};
#endif
