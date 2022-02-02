/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:38:38 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/27 12:40:19 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form_class.hpp"

Form::Form() : name(""), sign_grade_required(0), exec_grade_required(0)
{
}

Form::Form(std::string name, int sign, int exec) : name(name), sign_grade_required(sign), exec_grade_required(exec), sign(false)
{
	if(sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	if(sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
}
Form::Form(Form const &obj) : name(obj.name), sign_grade_required(obj.sign_grade_required), exec_grade_required(obj.exec_grade_required), sign(obj.sign)
{
	if(obj.sign_grade_required > 150 || obj.exec_grade_required > 150)
		throw Form::GradeTooLowException();
	if(obj.sign_grade_required < 1 || obj.exec_grade_required < 1)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(Form const &obj)
{
	if (this != &obj) 
	{
		if(obj.exec_grade_required > 150 || obj.sign_grade_required > 150)
			throw Form::GradeTooLowException();
		if(obj.exec_grade_required < 1 || obj.sign_grade_required < 1)
			throw Form::GradeTooHighException();
	}
	return (*this);
}
Form::~Form()
{
}

bool	Form::getSigned() const
{
	return (this->sign);
}
std::string	const Form::getName() const
{
	return (this->name);
}
int		Form::getGradeExec() const
{
	return (this->exec_grade_required);
}
int		Form::getGradeSign() const
{
	return (this->sign_grade_required);
}
void	Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() < this->sign_grade_required)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception : Grade too low");
}
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception : Grade too high");
}
const char *Form::NotSignedException::what() const throw()
{
	return ("Exception: Form's is not signed");
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << "Form exec grade = " << src.getGradeExec() << " Form sign Grade = " << src.getGradeSign()  << std::endl;
	return (o);
}
