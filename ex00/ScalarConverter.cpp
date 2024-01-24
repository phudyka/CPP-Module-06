/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:43 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/24 15:17:32 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default Constructor has been called" << std::endl ;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Default Destructor has been called" << std::endl ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
	std::cout << "Default Constructor has been constructed from copy" << std::endl ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

void	ScalarConverter::convert(const std::string &literal)
{
    char charResult = toChar(literal);
    int intResult = toInt(literal);
    float floatResult = toFloat(literal);
    double doubleResult = toDouble(literal);

    std::cout << "char: ";
    if (isprint(charResult))
        std::cout << "'" << charResult << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: ";
    if (intResult == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << intResult << std::endl;

    std::cout << "float: ";
    if (floatResult == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << floatResult << "f" << std::endl;

    std::cout << "double: ";
    if (doubleResult == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << doubleResult << std::endl;
}

char ScalarConverter::toChar(const std::string &literal)
{
    if (literal.length() == 1 && isprint(literal[0]))
        return (literal[0]);
    else
        return (static_cast<char>(-1));
}

int ScalarConverter::toInt(const std::string &literal)
{
    char *endptr;
    int result = std::strtol(literal.c_str(), &endptr, 10);

    if (*endptr != '\0')
        return (-1);
    return (result);
}

float ScalarConverter::toFloat(const std::string &literal)
{
    char *endptr;
    float result = std::strtof(literal.c_str(), &endptr);

	if (*endptr)
        return (-1);
    return (result);
}

double ScalarConverter::toDouble(const std::string &literal)
{
    char *endptr;
    double result = std::strtod(literal.c_str(), &endptr);

    if (*endptr != '\0')
        return (-1);
    return (result);
}
