/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:39:48 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/05 14:03:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstring>
#include <exception>

class Form;

class GradeTooLowException : public std::exception{
	virtual const char* what() const throw(){
		return "Bureaucrat grade too low";
	}
};

class GradeTooHighException : public std::exception{
	virtual const char* what() const throw(){
		return "Bureaucrat grade too high";
	}
};

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();
	std::string const getName() const;
	int	getGrade() const;
	void increment();
	void decrement();
	void signForm(Form obj);
private:
	const std::string name;
	int grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif