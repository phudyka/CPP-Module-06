/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:42 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:22:03 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "Data.hpp"
#include <stdint.h>

class Serialization
{
public:
    Serialization();
    Serialization(const Serialization& src);
    Serialization& operator=(const Serialization& src);
    ~Serialization();

    static uintptr_t serialize(Data *ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif 
