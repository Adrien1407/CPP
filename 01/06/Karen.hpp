/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:14:36 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/05 14:35:21 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>



class Karen {
	
	public:
		void complain(std::string level);
		Karen(void);
		~Karen(void);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
