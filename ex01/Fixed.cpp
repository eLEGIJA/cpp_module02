/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:48:12 by msafflow          #+#    #+#             */
/*   Updated: 2021/02/28 19:29:04 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

using	std::cout;
using	std::endl;

Fixed::Fixed()
{
	_value = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed( int const raw )
{
	cout << "Int constructor called" << endl;
	_value = raw << _bits;
}

Fixed::Fixed( const float val )
{
	cout << "Float constructor called" << endl;
	_value = roundf(val * (1 << _bits));
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed( const Fixed &fix )
{
	cout << "Copy constructor called" << std::endl;
	*this = fix;
}

void			Fixed::setRawBits( int const raw )
{
	_value = raw;
}

int				Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return (_value);
}

Fixed&			Fixed::operator=( const Fixed &fix )
{
	cout << "Assignation operator called" << endl;
	_value = fix._value;
	return (*this);
}

float			Fixed::toFloat( void ) const
{
	return (((float)(_value) / (1 << _bits)));
}

int				Fixed::toInt( void ) const
{
	return ((int)(_value >> _bits));
}

std::ostream&	operator<<(std::ostream& stream, Fixed const& fixed)
{
	stream << fixed.toFloat();
	return stream;
}
