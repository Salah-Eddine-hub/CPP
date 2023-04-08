/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:02:50 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/08 20:07:23 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) {
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
	this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	std::cout << "Bureaucrat copy assignment operator" << std::endl;
	this->~Bureaucrat();
	new (this) Bureaucrat(copy.name, copy.grade);
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor" << std::endl;
}

std::string const Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::increment() {
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrement() {
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form obj) {
	if (obj.getSign()) {
		std::cout << this->name << " couldn't sign " << obj.getName() << " because already signed." << std::endl; 
	}
	else {
		obj.setSign(true);
		std::cout << this->name << " signed " << obj.getName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return os;
}
