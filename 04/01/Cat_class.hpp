/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 17:28:33 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "./Animal_class.hpp"
#include "./Brain_class.hpp"

class Cat : virtual public Animal
{

	public:
		Cat();
		~Cat();
		Cat(Cat const &obj);
		Cat &operator=(Cat const &obj);
		void makeSound() const;
		Brain	&getBrain();
	private:
		Brain* brain;
};
#endif
