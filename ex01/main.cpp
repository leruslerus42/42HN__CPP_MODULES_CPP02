/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:44 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/14 05:17:21 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	const b(10);
	Fixed	const c(42.42f);
	Fixed	const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "----------------------------" << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "----------------------------" << std::endl;

	return (0);
}