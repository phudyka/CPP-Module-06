/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:57:50 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/25 16:01:50 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
        std::cerr << "Error ! [Bad Arguments] :" << argv[0] << " <literal>" << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
	return (0);
}