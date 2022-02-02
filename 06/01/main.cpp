/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:39:49 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 13:02:53 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

int main(int argc, const char *argv[])
{
	(void) argc, (void) argv;

	Data data;
	Data *data_bis; 
	uintptr_t	ptr;

	data.value = 42;
	data.str = "bonjour";
	ptr = serialize(&data);
	data_bis = deserialize(ptr);
	if (&data != data_bis)
		std::cout << "serialize ans deserialize are different" << std::endl;
	else
	{
		std::cout << "data value before serialize = " << data.value << std::endl;
		std::cout << "data str before serialize = " << data.str << std::endl;
		std::cout << "data adress before serialize = " << &data << std::endl;
		std::cout << "data value after serialize = " << data_bis->value << std::endl;
		std::cout << "data str after serialize = " << data_bis->str << std::endl;
		std::cout << "data adress after serialize = " << data_bis << std::endl;
	}
	return 0;
}
