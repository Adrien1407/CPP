/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:34:35 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/14 12:31:00 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

void	display_error(std::string error)
{
	std::cerr << error << std::endl;
}


void	find_and_replace(std::string &buff, std::string s1, std::string s2)
{
	size_t pos;

	pos = buff.find(s1);
	if (pos == std::string::npos)
	{
		display_error("no matching expression");
		return ;
	}
	while (pos != std::string::npos)
	{
		buff.erase(pos, s1.length());
		buff.insert(pos, s2);
		pos = buff.find(s1, pos + s2.length());
	}
}

std::string	fill_buff(std::ifstream &filein)
{
	std::string buff;
	char ch;

	while (filein.get(ch))
		buff.push_back(ch);
	return (buff);
}
int main(int ac, char **av)
{
	if(check_all(ac, av))
	{
		std::string s1, s2;
		s1 = av[2];
		s2 = av[3];
		std::ifstream filein(av[1]);
		if (s1.empty()|| s2.empty())
		{
			display_error("strings cannot be empty");
			return (1);
		}
		if (!filein.is_open())
		{
			display_error("Can not open file in");
			return (1);
		}
		std::string fileoutname = ".replace";
		std::ofstream fileout(av[1] + fileoutname);
		if (!fileout.is_open())
		{
			display_error("Can not open file in");
			return (1);
		}
		std::string buff = fill_buff(filein);
		find_and_replace(buff, s1, s2);
		fileout << buff;
		filein.close();
		fileout.close();
	}
}
