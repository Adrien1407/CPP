/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:35:54 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/25 17:21:25 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat_class.hpp"
#include "./Form_class.hpp"

void	test1()
{
	std::cout << "==========test 1=========="  << std::endl;
	try
	{
		Bureaucrat one("one", 150);
		Form		un("un", 73, 50);
		one.signForm(un);

	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException &e)
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
int main(void)
{
	test1();
//	test2();
//	test3();
}
