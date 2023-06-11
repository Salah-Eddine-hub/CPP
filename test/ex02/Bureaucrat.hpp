/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 08:54:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/06 12:39:48 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstring>
#include <exception>

class AForm;

class GradeTooLowException : public std::exception{
	const char* what() const throw(){
		return "too low";
	}
};

class GradeTooHighException : public std::exception{
	const char* what() const throw(){
		return "too high";
	}
};

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();
	void setGrade(int grade);
	std::string const getName() const;
	int	getGrade() const;
	void increment();
	void decrement();
	void signForm(AForm* obj);
	void excecuteForm(const AForm& form);
private:
	const std::string name;
	int grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif