/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 05:35:50 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 03:26:50 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <string.h>

#ifndef __FIXED__H__
#define __FIXED__H__
/*	 == != 

*/
class Fixed{
	private:
		int	_fixedNumber;
		static const int _bits = 8;
		
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed(int const fixedNumber);
		Fixed(float const fixedNumber);
		Fixed	&operator= (const Fixed &copy);

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);


		Fixed operator+(Fixed const &copy) const;
		Fixed operator-(Fixed const &copy) const;
		Fixed operator*(Fixed const &copy) const;
		Fixed operator/(Fixed const &copy) const;

		bool operator==( const Fixed &rhs) const;
		bool operator!=( const Fixed &rhs) const;
		bool operator>( const Fixed &rhs) const;
		bool operator<( const Fixed &rhs) const;
		bool operator>= (const Fixed &rhs) const;
		bool operator<= (const Fixed &rhs) const;


		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat() const;
		int		toInt() const;
		
		static const Fixed &min(Fixed &lhs, Fixed &rhs);
		static const Fixed &min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed &max(Fixed const &lhs, Fixed const &rhs);
		static const Fixed &max(Fixed &lhs, Fixed &rhs);
};

std::ostream &operator<<(std::ostream &output, const Fixed &num);

#endif	//!__FIXED__H__

//static: works independetly from objects instanciacion, static members are always available