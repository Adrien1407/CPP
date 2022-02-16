/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:32:45 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/03 13:42:15 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"


int main()
{
    std::cout << "-- vector test ---" << std::endl;
    std::vector<int> v;

    for(int i = 0; i < 5; i++)
        v.push_back(i);
    try
    {
        std::cout << easyfind(v, 4) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }
    try
    {
        std::cout << easyfind(v, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }

    std::cout << "-- list test ---" << std::endl;
    std::list<int> lst;

    for(int i = 0; i < 5; i++)
        lst.push_back(i);
    try
    {
        std::cout << easyfind(lst, 4) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }
    try
    {
        std::cout << easyfind(lst, -1) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }
}

