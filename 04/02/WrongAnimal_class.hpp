/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/10 18:08:59 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &obj);
		WrongAnimal &operator=(WrongAnimal const &obj);
		~WrongAnimal();
		void	makeSound() const;
	protected:
		std::string type;
};
#endif
