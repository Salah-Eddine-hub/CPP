/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:58:45 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/09 15:41:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : grade_s(0), grade_ex(0){
	isSigned = false;
	std::cout << "AForm default constructor" << std::endl;
}

AForm::~AForm(){
	std::cout << "AForm destructor" << std::endl;
}

AForm::AForm(std::string name, int grade_s, int grade_ex) : name(name), grade_s(grade_s), grade_ex(grade_ex){
	if (grade_s < 1)
		throw GradeTooHighException();
	if (grade_s > 150) 
		throw GradeTooLowException();
	if (grade_ex < 1)
		throw GradeTooHighException();
	if (grade_ex > 150) 
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), grade_s(other.grade_s), grade_ex(other.grade_ex){
	std::cout << "AForm copy constructor" << std::endl;
}

void AForm::setSign(bool sign) {
	this->isSigned = sign;
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
	os << obj.getName() << " the sign is " << obj.getSign() << " Form grade sign is "
		<< obj.getSgrade() << " and grade execute is " << obj.getEXgrade();
	return os;
}