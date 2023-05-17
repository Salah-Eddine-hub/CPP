/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:34 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/17 14:31:20 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

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
	bool ischar(std::string input);
	bool isint(std::string input);
	bool isdouble(std::string input);
	bool isfloat(std::string input);
	
private:
	std::string input;
};

std::ostream& operator<<(std::ostream os, const ScalarConverter& obj);
#endif