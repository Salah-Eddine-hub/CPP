/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 07:15:25 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/10 22:58:33 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <cstring>
#include <exception>
#include "Bureaucrat.hpp"

class AForm {
public:
	AForm();
	~AForm();
	AForm(std::string name, int grade_s, int grade_ex);
	AForm(const AForm& other);
	AForm& operator=(const AForm& copy);

	void setSign(bool sign);

	std::string getName() const;
	bool getSign() const;
	int getEXgrade() const;
	int getSgrade() const;
	
	void beSigned(Bureaucrat obj);
	virtual execute(Bureaucrat const & executor) = 0;
private:
	const std::string name;
	bool isSigned;
	const int grade_s;
	const int grade_ex;
	class GradeTooLowExeption : public std::exception {
		const char* what() const throw() {
			return "too low";
		}
	};
	class GradeTooHighException : public std::exception {
		const char* what() const throw() {
			return "too high";
		}
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
#endif