/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:45 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 11:21:06 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();
    	~ScalarConverter();
    	ScalarConverter(const ScalarConverter &other);
    	ScalarConverter &operator=(const ScalarConverter &other);
	
	public:
		static bool		isChar(const std::string &literal);
		static bool		isInt(const std::string &literal);
		static bool		isFloat(const std::string &literal);
		static bool		isDouble(const std::string &literal);
		static char		toChar(const std::string &literal);
		static int		toInt(const std::string &literal);
		static float	toFloat(const std::string &literal);
		static double	toDouble(const std::string &literal);

    static void	convert(const std::string &literal);
};

#endif
