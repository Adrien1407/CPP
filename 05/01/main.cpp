/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:35:54 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/26 12:50:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat_class.hpp"
#include "./Form_class.hpp"
void	test(std::string const &BureaucratName, std::string const &FormName, int grade, int exec_grade, int sign_grade)
{
	try
	{
		std::cout << "======" << BureaucratName <<  " test ======" << std::endl;
		std::cout << std::endl;
		Bureaucrat	bureaucrat(BureaucratName, grade);
		Form		form(FormName, sign_grade, exec_grade);
		std::cout << bureaucrat << std::endl;
		std::cout << " " << form << std::endl;
		bureaucrat.signForm(form);

		if (form.getSigned() == true)
		{
			bureaucrat.signForm(form);
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error:" << e.what() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
int main(void)
{
	std::string names[5] = {"Bureaucrat1", "Bureaucrat2", "Bureaucrat3", "Bureaucrat4", "Bureaucrat5"};
	std::string Form_names[5] = {"form1", "form2", "form3", "form4", "form5"};
	int			grades[5] = {1, 150, 42, -4, 46};
	int			exec_grades[5] = {12, 45, 83, 150, -3};
	int			sign_grade[5] = {24, 75, 103, 160, 5};

	for (int i = 0; i < 5; i++) {
		test(names[i], Form_names[i], grades[i], exec_grades[i], sign_grade[i]);
	}
}
