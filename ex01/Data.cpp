/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:12:49 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:28:11 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : value(0) {}

Data::Data(int val) : value(val) {} 

Data::Data(const Data& src) : value(src.value) {}

Data& Data::operator=(const Data& src)
{
    if (this != &src)
        this->value = src.value;
    return (*this);
}

Data::~Data() {}

int Data::getData() const
{
    return (value);
}