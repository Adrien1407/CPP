/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 18:08:13 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP

#include "./WrongAnimal_class.hpp"

class WrongCat : virtual public WrongAnimal
{

	public:
		WrongCat();
		~WrongCat();
		WrongCat &operator=(WrongCat const &obj);
		WrongCat(WrongCat const &obj);
		void makeSound() const;
	private:
};
#endif
