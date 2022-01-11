/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:10:45 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 10:43:34 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal_class.hpp"
#include "./Dog_class.hpp"
#include "./Cat_class.hpp"
#include "./WrongAnimal_class.hpp"
#include "./WrongCat_class.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongCat* wrongcat = new WrongCat();

	wronganimal->makeSound();
	wrongcat->makeSound();

	std::cout << std::endl << "--- Delete class ---" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wronganimal;
	delete wrongcat;
	return 0;
}
