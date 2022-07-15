/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 05:36:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 03:25:58 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	 const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << b << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "----------------------------" << std::endl;
	return (0);
}






























/*8 bits
RANGE		-15.875/+15.875
SIGN BIT: 			0(+) or 1(-) bit
INTEGRAL PART:		4 bits
FRACTIONAL PART		3 bits
*/

/*es. 4.5-> in integer 36(4.5*8 bits){maybe in float x16 bits}
We have to convert 4.5 in binary(100|101) e poi bitshifting until dont have 36 in binary(normally 8 times) con potenze del 2
*/

/*es. 10
bin: 1010,  Binary signed 2's complement:  0000000000001010

After bitshifting * 8 = 00001010|00000000(integral|fractional) -> 2560 Fixed Number
(to test: print obj.getRawBits())

10->2560
*/
