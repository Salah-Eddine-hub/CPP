/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:25:58 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/16 19:43:54 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called" << std::endl;
	this->fp_v = 0;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int convert){
	this->fp_v = convert * 256;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num){
	this->fp_v = (int) roundf(num * 256);
	// std::cout << "Float constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fp_v = other.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(fp_v + other.fp_v);
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(fp_v - other.fp_v);
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	return Fixed(fp_v / other.fp_v);
}

Fixed& Fixed::operator++() {
	fp_v++;
	return *this; 
}

Fixed Fixed::operator++(int) {
	Fixed copy = *this;
	operator++();
	return copy;
}

Fixed& Fixed::operator--() {
	fp_v--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy = *this;
	operator--();
	return copy;
}

Fixed& Fixed::min(Fixed& fp1, Fixed& fp2) {
	if (fp1.fp_v > fp2.fp_v)
		return fp2;
	return fp1;
}

const Fixed& Fixed::min(const Fixed& fp1, const Fixed& fp2) {
	if (fp1.fp_v > fp2.fp_v)
		return fp2;
	return fp1;
}

Fixed& Fixed::max(Fixed& fp1, Fixed& fp2) {
	if (fp1.fp_v > fp2.fp_v)
		return fp1;
	return fp2;
}

const Fixed& Fixed::max(const Fixed& fp1, const Fixed& fp2) {
	if (fp1.fp_v > fp2.fp_v)
		return fp1;
	return fp2;
}

bool Fixed::operator==(const Fixed &other) {
	return (fp_v == other.fp_v);
}

bool Fixed::operator>(const Fixed &other) {
	return (fp_v > other.fp_v);
}

bool Fixed::operator>=(const Fixed& other) {
	return (fp_v >= other.fp_v);
}

bool Fixed::operator<(const Fixed& other) {
	return (fp_v < other.fp_v);
}

bool Fixed::operator<=(const Fixed& other) {
	return (fp_v <= other.fp_v);
}

bool Fixed::operator!=(const Fixed& other) {
	return !(fp_v == other.fp_v);
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
	// std::cout << "getRawBit member fonction called" << std::endl;
	return (this->fp_v);
}


std::ostream& operator<<(std::ostream& ostream, const Fixed& fixed){
	ostream << fixed.toFloat();
	return ostream;
}