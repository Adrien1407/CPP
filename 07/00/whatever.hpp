/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:23:27 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/02 15:49:56 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
#include <string>

template <typename T>
void	swap(T &a,T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
template <typename T>
T const	max(T const a, T const b)
{
	if (a > b)
		return (a);
	return (b);
}
template <typename T>
T const	min(T const a, T const b)
{
	if (a < b)
		return (a);
	return (b);
}
#endif
