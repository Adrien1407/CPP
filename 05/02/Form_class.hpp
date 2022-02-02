/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:38:38 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/27 12:50:25 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include "./Bureaucrat_class.hpp"
class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, int sign, int exec);
		Form(Form const &obj);
		virtual ~Form(void);
		Form &operator=(Form const &obj);
		
		std::string	const	getName() const;
		bool				getSigned() const;
		int					getGradeExec() const;
		int					getGradeSign() const;
		void				beSigned(Bureaucrat &obj);
		virtual bool		execute(Bureaucrat const &executor) const = 0;
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
		class NotSignedException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	private:
		std::string	const	name;
		int			const	sign_grade_required;
		int			const	exec_grade_required;
		bool				sign;
};
std::ostream &operator<<(std::ostream &o, Form const &src);

#endif
