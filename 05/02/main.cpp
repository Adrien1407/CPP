/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:57:39 by bahaas            #+#    #+#             */
/*   Updated: 2022/01/27 14:37:27 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat_class.hpp"
#include "ShrubberyCreationForm_class.hpp"
#include "PresidentialPardonForm_class.hpp"
#include "RobotmyRequestForm_class.hpp"


void	ShrubberyCreationTest(std::string const &BureaucratName, int grade, std::string const &target)
{
	try
	{
		std::cout << "Bureaucrat number " << BureaucratName << std::endl;
		Bureaucrat bureaucrat(BureaucratName, grade);
		std::cout << bureaucrat << std::endl;
		ShrubberyCreationForm	form(target);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
		std::cout  << std::endl;
	}
	std::cout  << std::endl;
}
void	RobotmyRequestTest(std::string const &BureaucratName, int grade, std::string const &target)
{
	try
	{
		std::cout << "Bureaucrat number " << BureaucratName << std::endl;
		Bureaucrat bureaucrat(BureaucratName, grade);
		std::cout << bureaucrat << std::endl;
		RobotMyRequestForm	form(target);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
		std::cout  << std::endl;
	}
	std::cout  << std::endl;
}
void	PresidentialPardonTest(std::string const &BureaucratName, int grade, std::string const &target)
{

	try
	{
		std::cout << "Bureaucrat number " << BureaucratName << std::endl;
		Bureaucrat bureaucrat(BureaucratName, grade);
		std::cout << bureaucrat << std::endl;
		PresidentialPardonForm form(target);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);

	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
		std::cout  << std::endl;
	}
		std::cout  << std::endl;
}
int main ()
{
	std::cout << "===============ShrubberyCreationTest=============" << std::endl;
	std::cout << std::endl;
	ShrubberyCreationTest("1", 1, "test1");
	ShrubberyCreationTest("2", 150, "test1");
	ShrubberyCreationTest("3", 54, "test1");
	ShrubberyCreationTest("4", 3, "test1");
	ShrubberyCreationTest("5", -2, "test1");


	std::cout << "===============PresidentialPardonTest=============" << std::endl;
	std::cout << std::endl;
	PresidentialPardonTest("6", 1, "test1");
	PresidentialPardonTest("7", 150, "test1");
	PresidentialPardonTest("8", 24, "test1");
	PresidentialPardonTest("9", -54, "test1");
	PresidentialPardonTest("10", 2, "test1");

	std::cout << "===============RobotmyRequestTest=============" << std::endl;
	std::cout << std::endl;
	RobotmyRequestTest("11", 1, "test1");
	RobotmyRequestTest("12", 150, "test1");
	RobotmyRequestTest("13", 2, "test1");
	RobotmyRequestTest("14", 111111, "test1");
	RobotmyRequestTest("15", 30, "test1");
	return (0);
}

