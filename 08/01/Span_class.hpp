/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:21:13 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/03 17:21:13 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
#define SPAN_CLASS_HPP

class Span
{
	public:
		Span(void);
		~Span(void);
		Span(Span const &obj);
		Span &operator=(Span const &obj);
	private:
};

#endif
