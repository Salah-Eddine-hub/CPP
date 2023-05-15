/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:34 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/15 18:12:03 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& copy);
	void convert(std::string input);
	std::string getinput(void);
	int converToint(void);
	float converTofloat(void);
	double converTodouble(void);
	char converTochar(void);
	bool isint();
	bool isdouble();
	bool isfloat();
	
private:
	std::string input;
};

#endif