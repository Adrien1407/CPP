/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:56:40 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/25 17:22:23 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string>

#include "./Form_class.hpp"

class Form;
class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		virtual ~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &obj);
		std::string			getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &obj);
		class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
		class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	private:
		std::string const	name;
		int					note;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif
