/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:35:54 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/25 14:23:03 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat_class.hpp"

void	test1()
{
	std::cout << "==========test 1=========="  << std::endl;
	try
	{
		Bureaucrat one("one", 150);
		one.decrementGrade();
		std::cout << one << " " << std::endl;

	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
void	test2()
{
	std::cout << "==========test 2=========="  << std::endl;
	try
	{
		Bureaucrat two("two", 1);
		two.incrementGrade();
		std::cout << two << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
void	test3()
{
	std::cout << "==========test 3=========="  << std::endl;
	try
	{
		Bureaucrat three("three", 148329058);
		std::cout <<  three << std::endl;
	}

	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
void	test4()
{
	std::cout << "==========test 4=========="  << std::endl;
	try
	{
		Bureaucrat four("four", 150);
		std::cout << four << std::endl;
		four.decrementGrade();
		std::cout << four << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
void	test5()
{
	std::cout << "==========test 5=========="  << std::endl;
	try
	{
		Bureaucrat five("five", -2);
		std::cout << five << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
void	test6()
{
	std::cout << "==========test 6=========="  << std::endl;
	try
	{
		Bureaucrat six("six", 14);
		std::cout << six << std::endl;
		six.decrementGrade();
		std::cout << six << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
int main(void)
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
}
