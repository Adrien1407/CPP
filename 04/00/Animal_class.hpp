/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:45:25 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class Animal {

	public:
		Animal();
		Animal(Animal const &obj);
		Animal &operator=(Animal const &obj);
		virtual ~Animal();
		void			set_type(std::string animal_type);
		std::string		get_type() const;
		virtual void	makeSound() const;
	protected:
		std::string type;
};
#endif
