/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:48 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/13 18:13:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fp_v = 0;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int convert){
	this->fp_v = convert * 256;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	this->fp_v = (int) roundf(num * 256);
	std::cout << "Float constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_v = other.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const {
	return ((float) this->fp_v / 256);
}

int Fixed::toInt(void) const {
	return (this->fp_v / 256);
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	
	os << obj.toFloat();
	return os;
}