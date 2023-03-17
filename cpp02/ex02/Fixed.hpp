/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:25:17 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/16 18:58:15 by sharrach         ###   ########.fr       */
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
	Fixed operator-(const Fixed& other)const;
	Fixed operator+(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	Fixed & operator++();
	Fixed operator++(int);
	Fixed & operator--();
	Fixed operator--(int);
	static Fixed& min(Fixed& fp1, Fixed& fp2);
	static const Fixed& min(const Fixed& fp1, const Fixed& fp2);
	static Fixed& max(Fixed& fp1, Fixed& fp2);
	static const Fixed& max(const Fixed& fp1, const Fixed& fp2);
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
