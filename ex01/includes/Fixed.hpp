/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:59:55 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/14 05:39:56 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <string.h>

#ifndef __FIXED__H__
#define __FIXED__H__

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
		Fixed &operator= (const Fixed &copy);
		
		
		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat() const;
		int		toInt() const;		
};

std::ostream &operator<<(std::ostream &output, const Fixed &num);

#endif	//!__FIXED__H__