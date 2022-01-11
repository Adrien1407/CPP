/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain_class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:23 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/11 16:47:20 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include "./Animal_class.hpp"

class Brain
{

	public:
		Brain();
		~Brain();
		Brain(Brain const &obj);
		Brain &operator=(Brain const &obj);
		std::string	*get_ideas();
		std::string get_idea(int i);
	private:
		std::string ideas[100];
};
#endif
