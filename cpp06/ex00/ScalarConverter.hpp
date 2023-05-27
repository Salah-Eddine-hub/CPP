/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:34 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/26 05:50:54 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <iomanip>

class ScalarConverter{
public:
	ScalarConverter();
	ScalarConverter(std::string input);
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& copy);
	void convert(std::string input);
	std::string getinput(void);
	int converToint(void);
	float converTofloat(void);
	double converTodouble(void);
	char converTochar(void);
	int ischar(std::string input);
	int isint(std::string input);
	int isdouble(std::string input);
	int isfloat(std::string input);
	void setInput(void);
	class NonDisplayable : public std::exception {
		const char* what() const throw() {
			return "Non Displayable charachter";
		}
	};

	class Impossible : public std::exception {
		const char* what() const throw() {
			return "Imposible to convert";
		}
	};
private:
	std::string input;
};

// std::ostream& operator<<(std::ostream os, const ScalarConverter& obj);
#endif