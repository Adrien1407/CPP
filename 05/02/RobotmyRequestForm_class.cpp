/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm_class.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:24:06 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/27 12:56:18 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotmyRequestForm_class.hpp"


RobotMyRequestForm::RobotMyRequestForm() : Form("RobotMyRequestForm", 72, 45), target("")
{
}
RobotMyRequestForm::RobotMyRequestForm(std::string target) : Form("RobotMyRequestForm", 72, 45), target(target)
{
}

RobotMyRequestForm::RobotMyRequestForm(RobotMyRequestForm const &obj)
{
	*this = obj;
}

RobotMyRequestForm::~RobotMyRequestForm()
{
}

RobotMyRequestForm &RobotMyRequestForm::operator=(RobotMyRequestForm const &obj)
{
	if(this != &obj)
	{
		this->target = obj.target;
	}
	return(*this);
}
bool	RobotMyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw  Form::NotSignedException();
	if (this->getGradeExec() < executor.getGrade())
		throw	Bureaucrat::GradeTooLowException();
		std::cout << "rRrRrRrRrRrRrRrRrRrRrRrRrRr" << std::endl;
	if (rand() % 2 == 1)
		std::cout << this->target << "has been robotized" << std::endl;
	else
		std::cout << this->target << "hasn't been robotized" << std::endl;
	return (true);
}
