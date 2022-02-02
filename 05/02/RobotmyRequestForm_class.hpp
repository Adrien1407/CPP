/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm_class.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:35:26 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/27 12:55:24 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTMYREQUESTFORM_CLASS_HPP
#define ROBOTMYREQUESTFORM_CLASS_HPP

#include "./Form_class.hpp"
#include <cstdlib>
class RobotMyRequestForm : public Form
{
	public:
		RobotMyRequestForm(void);
		RobotMyRequestForm(std::string target);
		virtual			~RobotMyRequestForm(void);
		RobotMyRequestForm(RobotMyRequestForm const &obj);
		RobotMyRequestForm &operator=(RobotMyRequestForm const &obj);
		virtual bool	execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
