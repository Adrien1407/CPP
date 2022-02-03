/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:05:43 by adlancel          #+#    #+#             */
/*   Updated: 2022/02/03 12:05:57 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "./Array.hpp"

template<typename T>
Array<T>::Array(void) : _size(0), myArray(new T[0])
{
	std::cout << "Array default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), myArray(new T[n])
{
	std::cout << "Array constructor called" << std::endl;
	for(int i = 0; i < n; i++)
		this->myArray[i] = T();
}

template<typename T>
Array<T>::Array(Array const &obj)
{
	std::cout << "Array copy constructor called" << std::endl;
	this->myArray = new T[obj.size()]();
	for(int i = 0; i < obj.size(); i++)
		this->myArray[i] = obj.myArray[i];
	this->_size = obj.size();
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &obj)
{
	std::cout << "Array assignment operator called" << std::endl;
	if(this != &obj)
	{
		if(this->myArray)
			delete [] this->myArray;
		this->myArray = new T[obj.size()];
		for(int i = 0; i < obj.size(); i++)
			this->myArray[i] = obj.myArray[i];
		this->_size = obj.size();
	}
	return(*this);
}

template<typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if(index < 0 || index >= this->size())
		throw std::exception();
	return this->myArray[index];
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return this->_size;
}


template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
	delete [] this->myArray;
}

#endif
