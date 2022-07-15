/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:34:10 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 02:36:57 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(){
	_fixedNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

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