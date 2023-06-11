/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 08:52:53 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/08 22:29:00 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :  isSigned(false), grade_s(0), grade_ex(0){
	std::cout << "AForm default constructor" << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm  destructor" << std::endl;
}

AForm::AForm(std::string name, int grade_s, int grade_ex)
			: name(name), isSigned(false), grade_s(grade_s), grade_ex(grade_ex) {
	if (grade_s < 1)
		throw GradeTooHighException();
	if (grade_s > 150) 
		throw GradeTooLowException();
	if (grade_ex < 1)
		throw GradeTooHighException();
	if (grade_ex > 150) 
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
			: name(other.name), isSigned(other.isSigned), grade_s(other.grade_ex), grade_ex(other.grade_ex) {
	std::cout << "AForm copy constructor" << std::endl;
}

AForm& AForm::operator=(const AForm& copy) {
	std::cout << "AForm copy assignement operator" << std::endl;
	this->~AForm();
	new (this) AForm(copy.name, copy.grade_s, copy.grade_ex);
	this->isSigned = copy.isSigned;
	return (*this);
}

void AForm::beSigned(Bureaucrat obj) {
	if (obj.getGrade() > this->grade_s){
		throw GradeTooLowException();
	}
	obj.signForm(*this);
}

std::string AForm::getName() const{
	return (this->name);
}

bool AForm::getSign() const {
	return (this->isSigned);
}

int AForm::getEXgrade() const {
	return (this->grade_ex);
}

int AForm::getSgrade() const {
	return (this->grade_s);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	os << obj.getName() << " the sign is " << obj.getSign() << " Form grade sign is " << obj.getSgrade() << " and grade execute is " << obj.getEXgrade();
	return os;
}