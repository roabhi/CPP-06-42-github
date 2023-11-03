/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:09:04 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/03 22:53:52 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <climits>
# include <cfloat>

class ScalarConverter
{

    public:

      static void convert(std::string scalar);

    private:

      // ? Cannonical stuff
      ScalarConverter();
      ScalarConverter(const ScalarConverter & scalarconverter);
      ~ScalarConverter();
      ScalarConverter &operator=(const ScalarConverter & inst);
      // ? bool type utils funcs
      static bool isChar(std::string scalar);
      static bool isInt(std::string scalar);
      static bool isDouble(std::string scalar);
      static bool isFloat(std::string scalar);
      // ? parsing and checker funcs
      static int  checkType(std::string scalar);
      static bool parseInput(std::string scalar);

      // ? output funcs
      static void printChar(char c);
      static void printInt(int num);
      static void printFloat(float fl);
      static void printDouble(double db);
      static void printInfCase(std::string scalar);


};


#endif