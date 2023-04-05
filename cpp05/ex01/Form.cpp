/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:56:24 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/05 14:24:46 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :  grade_s(0), grade_ex(0){
	std::cout << "Form default constructor" << std::endl;
}

Form::~Form() {
	std::cout << "Form  destructor" << std::endl;
}

Form::Form(std::string name, int grade_s, int grade_ex)
			: name(name), grade_s(grade_s), grade_ex(grade_ex) {
	if (grade_s < 1)
		throw GradeTooHighException();
	if (grade_s > 150) 
		throw GradeTooLowException();
	if (grade_ex < 1)
		throw GradeTooHighException();
	if (grade_ex > 150) 
		throw GradeTooLowException();
}

Form::Form(const Form& other) : grade_s(other.grade_ex), grade_ex(other.grade_ex) {
	std::cout << "Form copy constructor" << std::endl;
	*this = other;
	// this->name = other.name;
}

Form& Form::operator=(const Form& copy) {
	std::cout << "Form copy assignement operator" << std::endl;
	this->~Form();
// 	cp.name = this->name;
// 	cp.name = copy.name;
// 	this->sign = copy.sign;
// 	this->grade_s = copy.grade_s;
	new (this) Form(copy.name, copy.grade_s, copy.grade_ex);
	return (*this);
}

void Form::beSigned(Bureaucrat obj) {
	if (obj.Getgrade() > this->grade_s){
		throw GradeTooLowException();
		return;
	}
	this->sign = 1;
	obj.signForm(*this);

}

std::string Form::getName() const{
	return (this->name);
}

bool Form::getSign() const {
	return (this->sign);
}

int Form::getEXgrade() const {
	return (this->grade_ex);
}

int Form::getSgrade() const {
	return (this->grade_s);
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << obj.getName() << " the sign is " << obj.getSign() << " Form grade sign is " << obj.getSgrade() << " and grade excute is " << obj.getEXgrade() << std::endl;
	return os;
}