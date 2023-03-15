/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:25:17 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/14 14:12:38 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int convert);
	Fixed(const float num);
	bool operator==(const Fixed& other);
	bool operator>(const Fixed& other);
	bool operator<(const Fixed& other);
	bool operator>=(const Fixed& other);
	bool operator<=(const Fixed& other);
	bool operator!=(const Fixed& other);
	Fixed & operator=(const Fixed& other);
	Fixed & operator-(const Fixed& other);
	Fixed & operator+(const Fixed& other);
	Fixed & operator*(const Fixed& other);
	Fixed & operator/(const Fixed& other);
	Fixed & operator++();
	Fixed & operator++(int);
	Fixed & operator--();
	Fixed & operator--(int);
	static Fixed& max();
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

10101001101011