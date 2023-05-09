/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:13:17 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/09 15:34:49 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm  constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("", 72, 45), target(target){
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm  destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : target(other.target) {
	std::cout << "RobotomyRequestForm copy constructor";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	std::cout << "RobotomyRequestForm copy assignement operator" << std::endl;
	this->target = copy.target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() <= 72 && executor.getGrade() <= 45)
	{
		srand(time(NULL));
		int random = 1 + (rand() % 2);
		switch(random) {
			case 1:
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			default:
				std::cout << this->getTarget() << " the robotomy failed." << std::endl;
		}
	}
	else
		throw GradeTooLowException();

}