/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:42:35 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/09 14:46:57 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include "./Weapon.hpp"

class	HumanA {

	public:
		~HumanA();
		HumanA(std::string, Weapon &arme);
		void attack();
	private:
		Weapon &arme;
		std::string _name;
};
#endif
