/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 08:57:06 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/08 22:23:10 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void Bureaucrat::setGrade(int grade) {
	this->grade = grade;
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

void Bureaucrat::signForm(AForm* obj) {
	if (obj.getSign()) {
		std::cout << this->name << " couldn't sign " << obj->getName() << " because already signed." << std::endl; 
	}
	else {
		obj.setSign(true);
		std::cout << this->name << " signed " << obj->getName() << std::endl;
	}
}

void Bureaucrat::excecuteForm(const AForm& form) {
	
	if(form.execute(*this))
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	else
		std::cout << "the bureaucrat counldn't execute the form!! " << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return os;
}
