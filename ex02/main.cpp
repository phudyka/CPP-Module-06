/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:33:08 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:42:43 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 5; ++i)
	{
        Base* objPtr = generate();

        identify(objPtr);

        delete (objPtr);
    }
    return (0);
}

