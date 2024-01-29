/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:18:11 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:27:30 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data* originalData = new Data(42);

    std::cout << "Original data: " << originalData->getData() << std::endl;

    uintptr_t serializedPtr = Serialization::serialize(originalData);
    Data* deserializedData = Serialization::deserialize(serializedPtr);

    std::cout << "Deserialized data: " << deserializedData->getData() << std::endl;

    if (originalData == deserializedData)
        std::cout << "Pointers match! Serialization and deserialization successful." << std::endl;
    else
        std::cout << "Pointers do not match! Serialization and deserialization failed." << std::endl;

    delete (originalData);
    return (0);
}

