/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:48:12 by msafflow          #+#    #+#             */
/*   Updated: 2021/02/28 17:25:00 by msafflow         ###   ########.fr       */
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

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed&	Fixed::operator=( Fixed &fix )
{
	cout << "Assignation operator called" << endl;
	_value = fix.getRawBits();
	return (*this);
}

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

int		Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return (_value);
}

Fixed::Fixed( Fixed &fix )
{
	cout << "Copy constructor called" << endl;
	*this = fix;
}
