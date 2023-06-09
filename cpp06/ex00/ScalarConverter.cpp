/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:21:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/29 13:15:46 by sharrach         ###   ########.fr       */
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

void ScalarConverter::setInput(void){
	this->input = this->input[1];
}

void ScalarConverter::convert(std::string put) {
	if (!checkput(put)){
		std::cout << "ERROR" << std::endl;
	}
else	if (put == "nan"){
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
else	if (ischar(put)){
		std::cout << "char : " << "'" << this->input[0] << "'"<< std::endl;
		std::cout << "int : " <<  static_cast<int>(this->input[0]) << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed << static_cast<double>(this->input[0])  << 'f' << std::endl;
		std::cout << "double : " <<  static_cast<double>(this->input[0]) << std::endl;
		
	}
	else if (isint(put)){
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
	else if(isfloat(put)) {
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
	else if(isdouble(put)) {
		std::cout << "char : " << "'" << converTochar() << "'"<< std::endl;
		std::cout << "int : " <<  converToint() << std::endl;
		std::cout << "float : " << std::setprecision(1) << std::fixed <<  converTofloat()  << 'f' << std::endl;
		std::cout << "double : " <<  converTodouble() << std::endl;
	}
}

int ScalarConverter::checkput(std::string input){
	int signbr = 0;
	int dtnbr = 0;
	int hh = 0;

	for(int i = 0; input[i]; i++){
		if (input[i] == '-' || input[i] == '+'){
			signbr ++;
			hh = 1;
			continue;
		}
		if (input[i] == '.')
			dtnbr++;
	}
	if (signbr > 1)
		return 0;
	if (dtnbr > 1){
		return 0;
	}
	if (hh == 1 && (input.find('+') != 0 && input.find('-') != 0))
		return(0);
	return 1;
}

int ScalarConverter::ischar(std::string input) {
	if (input.length() == 3 && (input[0] == '\'' && input[2] == '\'')){
		setInput();
		return (1);
	}
	return(0);
}

int ScalarConverter::isint(std::string input) {
	for(int i = 0; input[i]; i++) {
		if (std::isdigit(input[i]))
			continue;
		return (0);
		}
	return(1);
}

int ScalarConverter::isdouble(std::string input) {
	for(int i = 0; input[i]; i++) {
		if (input == "-inf" || input == "+inf" || input == "inf")
			return 1;
		if (input[i] == '-' || input[i] == '+')
			continue;
		if (std::isdigit(input[i]) || input[i] == '.')
			continue;
		return (0);
	}
	return(1);
}

int ScalarConverter::isfloat(std::string input) {
	if (input[input.length() - 1] != 'f')
		return 0;
	for(size_t i = 0; i < input.length() - 1; i++) {\
		if (input == "-inff" || input == "+inff" || input == "inff")
			return 1;
		if (input[i] == '-' || input[i] == '+')
			continue;
		if (!std::isdigit(input[i]) && input[i] != '.')
			return (0);
		else
			continue;
		if (std::isdigit(input[i]) || input[i] == '.')	
			continue;
		return (0);
	}
	return(1);
}

int ScalarConverter::converToint(void) {
	long long limit;
	limit = static_cast<long long>(atoll(this->input.c_str()));
	if (limit > INT_MAX || limit < INT_MIN)
		return 0;
	else
		return (static_cast<int>(atoi(this->input.c_str())));
}

double ScalarConverter::converTodouble(void) {
	return (static_cast<double>(atof(this->input.c_str())));
}

float ScalarConverter::converTofloat(void) {
	return (static_cast<float>(atof(this->input.c_str())));
}

char ScalarConverter::converTochar(void) {
	int i = this->converToint();
	if ((i > 32 && i < 127)){
		return (static_cast<char>(i));
	}
	else if (i >= 0 && i <= 32){
		std::cout << "Non Displayable";
		return '\0';
	}
	else{
		std::cout << "impossible";
		return '\0';
	}
}
