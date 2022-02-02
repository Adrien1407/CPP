/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm_class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:39:32 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/26 15:58:50 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "./Form_class.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		virtual			~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
		virtual bool	execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
