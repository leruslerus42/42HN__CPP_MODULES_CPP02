/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:31:02 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 02:41:08 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ORTHODOX CANONICAL FORM
From now on, all your classes must be designed in the Orthodox Canonical Form, unless explicitely stated otherwise. Then, they will implement the four required member functions below:
• Default constructor
• Copy constructor
• Copy assignment operator 
• Destructor
*/

/* COPY CONSTRUCTOR
Is a member function that initializes an object using another object of the same class.
The Copy constructor is called mainly when a new object is created from an existing object, as a copy of the existing object.
*/


/* FLOATING NUMBERS VS FIXED NUMBERS
A fixed point number just means that there are a fixed number of digits after the decimal point. 
A fixed point number has a specific number of bits (or digits) reserved for the integer part (the part to the left of the decimal point) and a specific number of bits reserved for the fractional part (the part to the right of the decimal point). No matter how large or small your number is, it will always use the same number of bits for each portion. 

A floating point number does not reserve a specific number of bits for the integer part or the fractional part. Instead it reserves a certain number of bits for the number (called the mantissa or significand) and a certain number of bits to say where within that number the decimal place sits (called the exponent). 
*/


#include "./includes/Fixed.hpp"

int main(void){
	Fixed	a;	//Constructor called
	std::cout << "----------------------------" << std::endl;
	
	Fixed	b(a);	//Copy constructor called	+	Assignation operator called (assignation sometimes not to see)
	std::cout << "----------------------------" <<  std::endl;

	Fixed	c;	//Constructor called
	std::cout << "----------------------------" <<  std::endl;

	c = b;	//Assignation operator called
	std::cout << "----------------------------" << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "----------------------------" << std::endl;

	return (0);
}