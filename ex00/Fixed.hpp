/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:47:43 by msafflow          #+#    #+#             */
/*   Updated: 2021/02/28 17:23:25 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed( Fixed &fix );
		Fixed& 				operator=( Fixed &fix );
		void				setRawBits( int const raw );
		int					getRawBits( void ) const;	
};

#endif