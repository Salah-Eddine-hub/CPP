/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:21:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/17 14:38:19 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor" << std::endl;
}

ScalarConverter::ScalarConverter(std::string input) : input(input) {
	convert(this->input);
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
	if (ischar(put)){
		std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " <<  converTofloat() << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
		
	}
	if (isint(put)){
		std::cout << "char : " <<  converTochar() << std::endl;
		std::cout << "float : " <<  converTofloat() << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
	else if(isfloat(put)) {
		converTochar();
		std::cout << "char : " <<  converTochar() << std::endl;
		std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
	else if(isdouble(put)) {
		std::cout << "char : " <<  converTochar() << std::endl;
		std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " <<  converTofloat() << std::endl;
	}
}

bool ScalarConverter::ischar(std::string input) {
	if (input[0] > 32 && input[0] < 127){
		return (1);
	}
	return(0);
}

bool ScalarConverter::isint(std::string input) {
	for(int i = 0; input[i]; i++) {
		if (input[i] >= '0' && input[i] <= '9')
			continue;
		return (0);
	}
	return(1);
}

bool ScalarConverter::isdouble(std::string input) {
	for(int i = 0; input[i]; i++) {
		if ((input[i] >= '0' && input[i] <= '9') || input[i] == '.')
			continue;
		return (0);
	}
	return(1);
}

bool ScalarConverter::isfloat(std::string input) {
	for(int i = 0; input[i]; i++) {
		if ((input[i] >= '0' && input[i] <= '9' 
			&& input[input.length() - 1] == 'f') || input[i] == '.')
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
