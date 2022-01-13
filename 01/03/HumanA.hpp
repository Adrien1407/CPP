/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:42:35 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/17 11:49:16 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include "./Weapon.hpp"

class	HumanA {

	public:
		HumanA(std::string, Weapon &arme);
		~HumanA();
		void attack();
	private:
		Weapon &arme;
		std::string name;
}
#endif
