/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:49:17 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/09 18:19:03 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed & operator=(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
private:
	int fp_v;
	static const int num_bit;
};


#endif