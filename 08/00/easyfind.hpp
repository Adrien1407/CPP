/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:20:58 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/03 13:41:28 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP 
#define EASYFIND_HPP
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

	template <typename T>
int	easyfind(T contain, int n)
{
	typename T::iterator it = std::find(contain.begin(), contain.end(), n);
		if(it == contain.end())
			throw std::exception();
	return (*it);

}

#endif
