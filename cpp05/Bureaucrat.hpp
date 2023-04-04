/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:39:48 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/04 11:30:37 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstring>
#include <exception>

class GradeTooLowException : public std::exception{
	virtual const char* what() const throw(){
		return "too low";
	}
};

class GradeTooHighException : public std::exception{
	virtual const char* what() const throw(){
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
	// void Setname(std::string name);
	// void Setgrade(int grade);
	std::string const Getname() const;
	int Getgrade() const;
	int Increment();
	int Decrement();
private:
	const std::string name;
	int grade;
	GradeTooLowException low;
	GradeTooHighException high;
	// class GradeTooHighException : public std::exception{
	// 	virtual const char* what() const throw();
	// };
	// class GradeTooLowException : public std::exception{
	// 	virtual const char* what() const throw();
	// };
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif