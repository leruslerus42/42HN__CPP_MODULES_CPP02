/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:59:46 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/14 05:17:04 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Fixed.hpp"

//CONSTRUCTOR
Fixed::Fixed(){
	_fixedNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}
//OVERLOAD CONSTRUCTOR INTEGER
Fixed::Fixed(int const d){
	_fixedNumber = d << _bits;
	std::cout << "Int constructor called" << std::endl;
	
};

//OVERLOAD CONSTRUCTOR FLOAT
Fixed::Fixed(float const f){
	_fixedNumber = roundf(f * ((1 << _bits)));
	std::cout << "Float constructor called" << this->_fixedNumber << std::endl;

}; 

//DESTRUCTOR
Fixed::~Fixed(){
	std::cout << "Deconstructor called" << std::endl;
}
//COPY CONSTRUCTOR
Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
//COPY ASSIGNMENT OPERATOR
Fixed	&Fixed::operator= (const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedNumber = copy.getRawBits();
	return (*this);
}


int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedNumber);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_fixedNumber = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)_fixedNumber) / (float)(1 << _bits);
}

int	Fixed::toInt() const{
	return (_fixedNumber >> _bits);
}
std::ostream &operator<<(std::ostream &output, const Fixed &num)
{
	output << num.toFloat();
	return (output);
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
