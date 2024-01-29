/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:11:34 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:27:56 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {}

Serialization::Serialization(const Serialization&) {}

Serialization& Serialization::operator=(const Serialization&)
{
	return (*this);
}

Serialization::~Serialization() {}

uintptr_t Serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}