/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:05:01 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/03 22:55:42 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./classes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
  if (argc > 1)
		ScalarConverter::convert(argv[1]);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "############## MY TESTS:    ##############" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("'a'");
	std::cout << std::endl;
	ScalarConverter::convert("97");
	std::cout << std::endl;
	ScalarConverter::convert(".f");
	std::cout << std::endl;
	ScalarConverter::convert("97.06222211");
	std::cout << std::endl;
  
  return (0);
}