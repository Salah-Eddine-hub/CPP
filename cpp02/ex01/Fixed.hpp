/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:31:35 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/13 18:06:13 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
//<=> that mean the spaceship operator
class Fixed{
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int convert);
	Fixed(const float num);
	Fixed & operator=(const Fixed& other);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
private:
	int fp_v;
	static const int num_bit = 8;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif