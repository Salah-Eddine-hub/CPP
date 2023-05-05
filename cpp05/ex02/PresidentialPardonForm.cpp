/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 22:28:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/08 22:34:38 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm  constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("", 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm  destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
	std::cout << "PresidentialPardonForm copy constructor"
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	std::cout << "PresidentialPardonForm copy assignement operator" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
	return this->target;
}
void PresidentialPardonForm::execute(const Bureaucrat& executor){
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." std::endl;
}