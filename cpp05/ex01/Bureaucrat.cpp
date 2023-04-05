/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:02:50 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/05 14:27:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) 
			: name(name), grade(grade) {
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
	// this->name = other.name;
	this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	std::cout << "Bureaucrat copy assignment operator" << std::endl;
	// this->name = copy.name;
	this->grade = copy.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor" << std::endl;
}

// const char* high::what() const throw() {
// 	return "too high";
// }

// const char* low::what() const throw() {
// 	return "too low";
// }

void Bureaucrat::Setgrade(int grade) {
	this->grade = grade;
}
std::string const Bureaucrat::Getname() const{
	return this->name;
}

int Bureaucrat::Getgrade() const{
	return this->grade;
}

int Bureaucrat::Increment() {
	return this->grade--;
}

int Bureaucrat::Decrement() {
	return this->grade++;
}

void Bureaucrat::signForm(Form obj) {
	if (obj.getSign() == 1)
		std::cout << *this << " signed " << obj << std::endl;
	else if (obj.getSign() == 0)
		std::cout << *this << " couldn't sign " << obj << " because already signed" << std::endl; 
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.Getname() << ", bureaucrat grade " << obj.Getgrade() << "." << std::endl;
	return os;
}