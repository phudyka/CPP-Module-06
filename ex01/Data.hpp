/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:13:10 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:24:11 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
private:
    int value;

public:
    Data();
    Data(int val);
    Data(const Data& src);
    Data& operator=(const Data& src);
    ~Data();

    int getData() const;
};

#endif // DATA_HPP

