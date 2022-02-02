/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:06:26 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 16:16:44 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
	
	template <typename T>
void	print(T const &value)
{
	std::cout << value << std::endl;
}
	template<typename T>
void	iter(T *tab, size_t length, void (*f)(T const &value))
{
	for (int i = 0; i < length; i++) {
		(*f)(tab[i]);
	}
}
#endif
