/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 22:28:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/08 22:34:38 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm  constructor" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("", 145, 137), target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm  destructor" << std::endl;
}