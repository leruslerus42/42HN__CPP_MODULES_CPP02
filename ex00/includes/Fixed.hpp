/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:34:07 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/13 10:51:13 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
		Fixed &operator= (const Fixed &copy);
		
		int		getRawBits() const;
		void	setRawBits(int const raw);

};
#endif	//!__FIXED__H__