/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:04:59 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/03 12:09:52 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
public:
	Array();
	Array(unsigned int length);
	Array(Array const &obj);
	virtual ~Array();
	Array	&operator=(Array const &obj);
	T	&operator[](unsigned int length);
	unsigned int	size(void) const;

private:
	unsigned int _size;
	T *myArray;
};
#include "./array.tpp" 
#endif
