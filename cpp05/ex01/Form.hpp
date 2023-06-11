	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:55:30 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/07 17:35:06 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <cstring>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
public:
	Form();
	~Form();
	Form(std::string name, int grade_s, int grade_ex);
	Form(const Form& other);
	Form& operator=(const Form& copy);

	void setSign(bool sign);

	std::string getName() const;
	bool getSign() const;
	int getEXgrade() const;
	int getSgrade() const;
	
	void beSigned(Bureaucrat obj);
private:
	const std::string name;
	bool isSigned;
	const int grade_s;
	const int grade_ex;
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
#endif