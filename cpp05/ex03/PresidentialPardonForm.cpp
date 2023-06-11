/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:58:49 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/10 11:43:26 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm  constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("", 25, 5), target(target) {
	std::cout << "I' am here" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm  destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : target(other.target) {
	std::cout << "PresidentialPardonForm copy constructor";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	std::cout << "PresidentialPardonForm copy assignement operator" << std::endl;
	this->target = copy.target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const{
	if (executor.getGrade() < 25 && executor.getGrade() <= 5){
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else{
		throw GradeTooLowException();
	}
}