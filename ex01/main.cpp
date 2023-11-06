/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:16:16 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 17:35:21 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./classes/Serializer.hpp"

int main(void)
{
  Data		*ptr;
	Data		*newPtr;
	uintptr_t	raw;
	int			number;

	number = 42;
	ptr = new Data;
	ptr->c = number;
	ptr->i = number;
	ptr->ptr = &number;
  std::cout << "Number used is " << number << std::endl << std::endl;
	std::cout << "[ BEFORE ] Data *ptr stats -> ptr: " << ptr << std::endl \
				<< " && ptr->c: " << ptr->c << std::endl \
				<< " && ptr->i: " << ptr->i << std::endl \
				<< " && ptr->ptr: " << ptr->ptr << std::endl \
				<< " && *( ptr->ptr ): " << *( ptr->ptr ) << std::endl \
				<< std::endl;
	raw = Serializer::serialize( ptr );
	newPtr = Serializer::deserialize( raw );
	std::cout << "[ AFTER ] Data *newPtr stats -> ptr: " << newPtr << std::endl\
				<< " && newPtr->c: " << newPtr->c << std::endl\
				<< " && newPtr->i: " << newPtr->i << std::endl\
				<< " && newPtr->ptr: " << newPtr->ptr << std::endl\
				<< " && *( newPtr->ptr ): " << *( newPtr->ptr ) << std::endl \
				<< std::endl;
	delete ptr;
	return ( 0 );
}