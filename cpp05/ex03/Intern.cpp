/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:02:42 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/09 15:33:58 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor" << std::endl;
}

AForm* Intern::PresidentialPardonForm_N(std::string name) {
	return (new PresidentialPardonForm(name));
}

AForm* Intern::RobotomyRequestForm_N(std::string name) {
	return (new RobotomyRequestForm(name));
}

AForm* Intern::ShrubberyCreationForm_N(std::string name) {
	return (new ShrubberyCreationForm(name));
}

AForm* Intern::makeForm(std::string formname, std::string target) {
	std::string forms[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	AForm* (Intern::*fun[3])(std::string) = {&Intern::PresidentialPardonForm_N, &Intern::RobotomyRequestForm_N, &Intern::ShrubberyCreationForm_N};
	for (int i = 0; i < 3; i++) {
		if (formname == forms[i]) {
			std::cout << "Intern creates " << forms[i] << std::endl;
			return ((this->*(fun[i]))(target));
		}
	}
	std::cout << "Intern cannot create  " << formname << " because is doesn't exist" << std::endl; 
	return (NULL);
}