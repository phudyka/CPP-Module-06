/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:43 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:54:04 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default Constructor has been called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter has been destroyed" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}

bool ScalarConverter::isChar(const std::string &literal)
{
    return (literal.length() == 1 && isprint(literal[0]));
}

bool ScalarConverter::isInt(const std::string &literal)
{
    char *endptr;
    strtol(literal.c_str(), &endptr, 10);
    return (*endptr == '\0');
}

bool ScalarConverter::isFloat(const std::string &literal)
{
    char *endptr;
    strtof(literal.c_str(), &endptr);
    return (*endptr == '\0');
}

bool ScalarConverter::isDouble(const std::string &literal)
{
    char *endptr;
    strtod(literal.c_str(), &endptr);
    return (*endptr == '\0');
}

char ScalarConverter::toChar(const std::string &literal)
{
    if (isChar(literal))
        return (literal[0]);
    else
        return (static_cast<char>(-1));
}

int ScalarConverter::toInt(const std::string &literal)
{
    if (isInt(literal))
        return (std::strtol(literal.c_str(), 0, 10));
    else
        return (-1);
}

float ScalarConverter::toFloat(const std::string &literal)
{
    char *endptr;
    if (isFloat(literal))
        return (std::strtof(literal.c_str(), &endptr));
    else
        return (-1);
}

double ScalarConverter::toDouble(const std::string &literal)
{
    if (isDouble(literal))
        return (std::strtod(literal.c_str(), 0));
    else
        return (-1);
}

void ScalarConverter::convert(const std::string &literal)
{
    char charResult = toChar(literal);
    int intResult = toInt(literal);
    float floatResult = toFloat(literal);
    double doubleResult = toDouble(literal);

    std::cout << "char: ";
    if (isprint(charResult))
        std::cout << "'" << charResult << "'" << std::endl;
    else if (literal.length() == 1)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "impossible" << std::endl;

    std::cout << "int: ";
    if (intResult == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << intResult << std::endl;

    std::cout << "float: ";
    if (floatResult == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << floatResult << "f" << std::endl;

    std::cout << "double: ";
    if (doubleResult == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << doubleResult << std::endl;
}