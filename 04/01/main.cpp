/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:10:45 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 17:29:10 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal_class.hpp"
#include "./Dog_class.hpp"
#include "./Cat_class.hpp"
#include "./WrongAnimal_class.hpp"
#include "./WrongCat_class.hpp"
#include "./Brain_class.hpp"

#include <string>
#define TOTAL 8
int main()
{

	Animal* animals[8];
	std::cout << "===========================creation==================================" <<std::endl;
	for (int i = 0; i < 8; i++) {
		if(i < 4)
		{
			animals[i] = new Dog();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Cat();
			std::cout << std::endl;
		}
	}
	std::cout << "===========================deletion==================================" <<std::endl;
	for (int i = 0; i < 8; i++) {
		delete animals[i];
	}
	Cat newCat;
	Dog newDog;
	Cat copyCat = newCat;
	Dog copyDog = newDog;

	std::cout << "\n########################################################\n";
	std::cout << "Address of cat's brain : " << &(newCat.getBrain()) << "\n";
	std::cout << "Address of cat's brain copy : " << &(copyCat.getBrain()) << "\n";
	std::cout << "Address of dogs's brain : " << &(newDog.getBrain()) << "\n";
	std::cout << "Address of dogs's brain copy : " << &(copyDog.getBrain()) << "\n";
		std::cout << "########################################################\n";
}

