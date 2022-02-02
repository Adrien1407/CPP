/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:09:48 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 15:00:48 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	unsigned int seed;
	seed = time(NULL);
	int n;
	n = rand() % 3;
	Base *base = NULL;
	switch (n)
	{
		case (1):
			base = new A();
			std::cout << "class A is generated" << std::endl;
			break;
		case (2):
			base = new B();
			std::cout << "class B is generated" << std::endl;
			break;
		default:
			base = new C();
			std::cout << "class C is generated" << std::endl;
			break;
	}
	return (base);
}
void	identify(Base *p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "class a is identified using the pointer" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "class b is identified using the pointer" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "class c is identified using the pointer" << std::endl;
}
void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "class a is identified using the reference" << std::endl;
		(void) a;
	}
	catch (std::exception &e)
	{}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "class b is identified using the reference" << std::endl;
		(void) b;
	}
	catch (std::exception &e)
	{}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "class c is identified using the reference" << std::endl;
		(void) c;
	}
	catch (std::exception &e)
	{}
}
int main(int argc, const char *argv[])
{
	for (int i = 0; i < 8; i++) {

		Base *base = generate();
		identify(base);
		identify(*base);
		delete base;
		std::cout << std::endl;
	}
	return 0;
}

