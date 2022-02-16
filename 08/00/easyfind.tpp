# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    easyfind.tpp                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 13:23:42 by adlancel          #+#    #+#              #
#    Updated: 2022/02/03 13:26:59 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template<typename T>

int	easyfind(T tab[], int n)
{
	for (int i = 0; tab[i]; i++) {

		if (tab[i] == n)
			return (tab[i])
	}
	return (-1);
}

#endif
