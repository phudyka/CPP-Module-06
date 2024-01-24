/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:45 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/24 15:17:12 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <limits>
#include <cstdlib> 
#include <sstream>
#include <iostream>

class ScalarConverter
{
	private:
		static char		toChar(const std::string &literal);
		static int		toInt(const std::string &literal);
		static float	toFloat(const std::string &literal);
		static double	toDouble(const std::string &literal);
	public:
		ScalarConverter();
    	~ScalarConverter();
    	ScalarConverter(const ScalarConverter &other);
    	ScalarConverter &operator=(const ScalarConverter &other);

    static void	convert(const std::string &literal);
};

#endif
