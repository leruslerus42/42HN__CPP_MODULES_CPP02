/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 05:35:42 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 03:26:59 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Fixed.hpp"

//CONSTRUCTOR
Fixed::Fixed(){
	_fixedNumber = 0;
}
//OVERLOAD CONSTRUCTOR INTEGER
Fixed::Fixed(int const d){
	_fixedNumber = d << _bits;
	
};

//OVERLOAD CONSTRUCTOR FLOAT
Fixed::Fixed(float const f){
	_fixedNumber = roundf(f * ((1 << _bits)));
	//std::cout << "Float constructor called" << this->_fixedNumber << std::endl;

}; 

//DESTRUCTOR
Fixed::~Fixed(){
	//std::cout << "Deconstructor called" << std::endl;
}
//COPY CONSTRUCTOR
Fixed::Fixed(const Fixed &copy){
	*this = copy;
}
//COPY ASSIGNMENT OPERATOR
Fixed	&Fixed::operator= (const Fixed &copy){
	_fixedNumber = copy.getRawBits();
	return (*this);
}


int		Fixed::getRawBits() const{
	return (_fixedNumber);
}

void	Fixed::setRawBits(int const raw){
	_fixedNumber = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)_fixedNumber) / (float)(1 << _bits);
}

int	Fixed::toInt() const{
	return (_fixedNumber >> _bits);
}

Fixed Fixed::operator+ (Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));

}

Fixed Fixed::operator- (Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));

}


Fixed Fixed::operator* (Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/ (Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));

}

bool Fixed::operator== (const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits() ? true : false);
}

bool Fixed::operator!= (const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits() ? true : false);
}

bool Fixed::operator> (const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits() ? true : false);
}

bool Fixed::operator>= (const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits() ? true : false);
}

bool Fixed::operator< (const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits() ? true : false);
}

bool Fixed::operator<= (const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits() ? true : false);
}

//OPERATOR++ PRE-INCREMENT
Fixed &Fixed::operator++()
{
	this->_fixedNumber ++;
	return *this;
}

//OPERATOR++  POST-INCREMENT
Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

//OPERATOR-- PRE-DECREMENT
Fixed &Fixed::operator--()
{
	this->_fixedNumber --;
	return *this;
}

//OPERATOR--  POST-DECREMENT
Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}


const Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

const Fixed &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

std::ostream &operator<<(std::ostream &output, const Fixed &num)
{
	output << num.toFloat();
	return (output);
}