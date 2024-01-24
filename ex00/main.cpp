/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:57:50 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/24 15:22:25 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
        std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
        return (1);
    }
    std::string literal = argv[1];
    ScalarConverter converter;
    try
	{
        converter.convert(literal);
    }
	catch (const std::exception &e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
        return (1);
    }
    return (0);
}