/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:47:43 by msafflow          #+#    #+#             */
/*   Updated: 2021/02/28 19:33:27 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

using	std::ostream;

class	Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed( void) ;
		Fixed( const int val );
		Fixed( const float val );
		~Fixed( void );
		Fixed( const Fixed &fix );
		Fixed&	operator=( const Fixed &fix );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

ostream&		operator<<(ostream& stream, Fixed const& fix);

#endif