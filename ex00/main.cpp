/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:05:06 by msafflow          #+#    #+#             */
/*   Updated: 2021/02/28 17:23:50 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

using	std::cout;
using	std::endl;

int main( void )
{
	Fixed	a;
	Fixed	b( a );
	Fixed	c;

	c = b;
	cout << a.getRawBits() << endl;
	cout << b.getRawBits() << endl;
	cout << c.getRawBits() << endl;

	return (0);
}
