/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:31:01 by phudyka           #+#    #+#             */
/*   Updated: 2024/01/26 15:35:01 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
    	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
