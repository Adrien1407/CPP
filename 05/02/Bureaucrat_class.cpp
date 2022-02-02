/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:25:16 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/26 12:43:51 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat_class.hpp"

Bureaucrat::Bureaucrat()
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->note = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	if(obj.note > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(obj.note < 1)
		throw Bureaucrat::GradeTooHighException();
	*this = obj;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	if(this != &obj)
	{
		if(obj.note > 150)
			throw Bureaucrat::GradeTooLowException();
		if(obj.note < 1)
			throw Bureaucrat::GradeTooHighException();
		this->note = obj.note;
	}
	return(*this);
}
std::string  Bureaucrat::getName() const
{
	return (this->name);
}
int	 Bureaucrat::getGrade() const
{
	return (this->note);
}
void	Bureaucrat::incrementGrade()
{
	if (this->note < 2)
		throw Bureaucrat::GradeTooHighException();
	this->note--;
}
void	Bureaucrat::decrementGrade()
{
	if (this->note >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->note++;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception : Grade too high");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception : Grade too low");
}
void	Bureaucrat::signForm(Form &obj)
{
	if (obj.getSigned())
		std::cout << this->name << " cannot sign "  << obj.getName() << " Form because it's already signed" <<  std::endl;
	else if (obj.getGradeSign() >= this->note)
	{
		std::cout << this->name << " signs "  << obj.getName() << " Form" <<  std::endl;
		obj.beSigned(*this);
	}
	else
		throw	Bureaucrat::GradeTooLowException();
}
Bureaucrat::~Bureaucrat()
{
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << " bureaucrat grade = " << src.getGrade() <<  std::endl;
	return (o);
}
