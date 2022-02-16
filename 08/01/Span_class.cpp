/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:21:13 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/03 17:21:13 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span_class.hpp"

Span::Span()
{
	std::cout << "default constructor called;" << std::endl;
}

Span::Span(span const &obj)
{
	std::cout << " copy constructor called;" << std::endl;
}

Span::~Span()
{
	std::cout << "default destructor called;" << std::endl;
}

Span &Span::operator=(Span const &obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
	}
	return(*this);
}
