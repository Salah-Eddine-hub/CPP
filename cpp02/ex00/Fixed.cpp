/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:08:07 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/11 17:39:51 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fp_v = 0;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed & Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_v = other.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw){
	this->fp_v = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBit member fonction called" << std::endl;
	return (this->fp_v);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}