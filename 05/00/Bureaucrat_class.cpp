/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:25:16 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/25 14:16:57 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat_class.hpp"

Bureaucrat::Bureaucrat()
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat constructor called;" << std::endl;
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->note = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	std::cout << "Bureaucrat copy constructor called;" << std::endl;
	if(obj.note > 150)
		throw Bureaucrat::GradeTooLowException();
	if(obj.note < 1)
		throw Bureaucrat::GradeTooHighException();
	*this = obj;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << "Bureaucrat assignation constructor called;" << std::endl;
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
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called;" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << " bureaucrat grade = " << src.getGrade() <<  std::endl;
	return (o);
}
