/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:48 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/10 18:47:54 by sharrach         ###   ########.fr       */
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

Fixed::Fixed(const int convert){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_v = other.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->fp_v));
}

int Fixed::toInt(void) const {
	return (static_cast<int>(this->fp_v));
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