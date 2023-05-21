/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:21:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/21 17:09:24 by sharrach         ###   ########.fr       */
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
	if (isint(put)){
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		if (put == "nan")
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
	else if (ischar(put)){
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		if (put == "nan")
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed << converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
		
	}
	else if(isfloat(put)) {
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		if (put == "nan")
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
	else if(isdouble(put)) {
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		if (put == "nan")
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
}

bool ScalarConverter::ischar(std::string input) {
	if ((input[0] > 32 && input[0] < 48) || (input[0] > 57 && input[0] < 127)){
		return (true);
	}
	else{
		return(false);	
	}
}

bool ScalarConverter::isint(std::string input) {
	for(int i = 0; input[i]; i++) {
		if (input[i] == '-' || input[i] == '+')
			continue;
		if (input[i] >= '0' && input[i] <= '9')
			continue;
		return (0);
	}
	return(1);
}

bool ScalarConverter::isdouble(std::string input) {
	int dtnbr = 0;
	for(int i = 0; input[i]; i++) {
		if (input[i] == '.')
			dtnbr++;
		if (std::isdigit(input[i]) || input[i] == '.')
			continue;
		return (0);
	}
	if (dtnbr > 1){
		std::cout << "Too many ." << std::endl;
		return 0;
	}
	return(1);
}

bool ScalarConverter::isfloat(std::string input) {
	int dtnbr = 0;
	for(int i = 0; input[i]; i++) {
		if (input[input.length() - 1] != 'f' )
			return 0;
		else
			continue;
		if (input[i] == '.')
			dtnbr++;
		if (std::isdigit(input[i]) || input[i] == '.')
			continue;
		
		return (0);
	}
	if (dtnbr > 1){
		std::cout << "Too many ." << std::endl;
		return 0;
	}
	return(1);
}
	// int i;
	// std::stringstream ss;
	
	// ss << a;
	// ss >> i;
int ScalarConverter::converToint(void) {
	return (static_cast<int>(std::atoi(this->input.c_str())));
}

double ScalarConverter::converTodouble(void) {
	return (static_cast<double>(std::atof(this->input.c_str())));
}

float ScalarConverter::converTofloat(void) {
	return (static_cast<float>(std::atof(this->input.c_str())));
}

char ScalarConverter::converTochar(void) {
	int val = this->converToint();
	if ((val > 32 && val < 48) || (val > 57 && val < 127)){
		return (static_cast<char>(std::atoi(this->input.c_str())));
	}
	else if (val >= 0 && val <= 32){
		std::cout << "Non Displayable";
		return '\0';
	}
	else{
		std::cout << "impossible";
		return '\0';
	}
}
