/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 17:24:29 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "./Animal_class.hpp"
#include "./Brain_class.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const &obj);
		Dog &operator=(Dog const &obj);
		void makeSound() const;
		Brain &getBrain() ;
	private:
		Brain *brain;
};

#endif
