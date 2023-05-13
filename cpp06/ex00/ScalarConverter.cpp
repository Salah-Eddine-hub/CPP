/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:21:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/12 19:24:57 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter destructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) : input(other.input) {
	std::cout << "ScalarConverter copy constructor" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) {
	std::cout << "ScalarConverter copy assignment operator" << std::endl;
	this->~ScalarConverter();
	new (this) ScalarConverter();
	return (*this);
}

void ScalarConverter::convert(std::string put) {
	// if ()
}

int ScalarConverter::converToint(void) {
	return (static_cast<int>(std::stoi(this->input.c_str())));
}

double ScalarConverter::converTodouble(void) {
	return (std::stod(this->input));
}

float ScalarConverter::converTofloat(void) {
	return (std::stof(this->input));
}

char ScalarConverter::converTochar(void) {
	return (this->input[0]);
}