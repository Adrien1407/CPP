/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm_class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:05:27 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/26 15:35:32 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "./Form_class.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		virtual			~PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
		virtual bool	execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
