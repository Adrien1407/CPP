/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:00:21 by adlancel          #+#    #+#             */
/*   Updated: 2021/12/17 11:11:43 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adress of the string :" << &str << std::endl;
	std::cout << std::endl;
	std::cout << "adress of the string using the pointer :" << stringPTR << std::endl;
	std::cout << "adress of the string using the reference :" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "content of the string using the pointer :" << stringREF << std::endl;
	std::cout << "content of the string using the reference :" << *stringPTR << std::endl;

}
