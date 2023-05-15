/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:21:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/15 18:42:46 by sharrach         ###   ########.fr       */
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
	this->input = copy.input;
	return (*this);
}

std::string ScalarConverter::getinput(void) {
	return (this->input);
}

void ScalarConverter::convert(std::string put) {
	(void)put;
	if (isint()){
		converTochar();
		converTofloat();
		converTodouble();
	}
	else if(isfloat()) {
		converTochar();
		converToint();
		converTodouble();
	}
	else if(isdouble()) {
		converTochar();
		converToint();
		converTofloat();
	}
}

bool ScalarConverter::isint() {
	for(int i = 0; this->input[i]; i++) {
		if (this->input[i] >= '0' && this->input[i] <= '9')
			continue;
		return (0);
	}
	return(1);
}

bool ScalarConverter::isdouble() {
	for(int i = 0; this->input[i]; i++) {
		if ((this->input[i] >= '0' && this->input[i] <= '9') || this->input[i] == '.')
			continue;
		return (0);
	}
	return(1);
}

bool ScalarConverter::isfloat() {
	for(int i = 0; this->input[i]; i++) {
		if ((this->input[i] >= '0' && this->input[i] <= '9' 
			&& this->input[this->input.length() - 1] == 'f') || this->input[i] == '.')
			continue;
		return (0);
	}
	return(1);
}

int ScalarConverter::converToint(void) {
	return (static_cast<int>(std::stoi(this->input.c_str())));
}

double ScalarConverter::converTodouble(void) {
	return (static_cast<double>(std::stod(this->input)));
}

float ScalarConverter::converTofloat(void) {
	return (static_cast<float>(std::stof(this->input)));
}

char ScalarConverter::converTochar(void) {
	return (static_cast<char>(this->input[0]));
}