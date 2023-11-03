/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:19:11 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/03 15:30:41 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
  return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter & scalarconverter)
{
  (void)scalarconverter;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter & inst)
{
  (void)inst;
  return (*this);
}

bool  ScalarConverter::isChar(std::string scalar)
{
  
}

ScalarConverter::~ScalarConverter()
{
  return ;
}