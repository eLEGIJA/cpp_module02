/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:05:06 by msafflow          #+#    #+#             */
/*   Updated: 2021/02/28 19:22:10 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

using	std::cout;
using	std::endl;

int main( void )
{
	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );
	a = Fixed(1234.4321f);

	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << "c is " << c << endl;
	cout << "d is " << d << endl;
	
	cout << "a is " << a.toInt() << " as integer" << endl;
	cout << "b is " << b.toInt() << " as integer" << endl;
	cout << "c is " << c.toInt() << " as integer" << endl;
	cout << "d is " << d.toInt() << " as integer" << endl;

	return (0);
}
