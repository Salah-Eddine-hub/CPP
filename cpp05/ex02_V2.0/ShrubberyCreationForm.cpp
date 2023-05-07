/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:41:16 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/07 20:35:05 by sharrach         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : target(other.target) {
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	std::cout << "ShrubberyCreationForm copy assignement operator" << std::endl;
	target = copy.target;
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& execute) {
	std::ofstream infile;

	infile.open(this->target + "_Shrubbery");
	if (!infile)
		std::cerr << "the file couldn't open!!" << std::endl;
	if (infile.is_open()){
		infile << "                 *" << std::endl;
		infile << "                ***" << std::endl;
		infile << "               *****" << std::endl;
		infile << "              *******" << std::endl;
		infile << "             *********" << std::endl;
		infile << "            ***********" << std::endl;
		infile << "           *************" << std::endl;
		infile << "          ***************" << std::endl;
		infile << "         *****************" << std::endl;
		infile << "        *******************" << std::endl;
		infile << "       *********************" << std::endl;
		infile << "      ***********************" << std::endl;
		infile << "     *************************" << std::endl;
		infile << "    ***************************" << std::endl;
		infile << "   *****************************" << std::endl;
		infile << "  *******************************" << std::endl;
		infile << "             *********" << std::endl;
		infile << "             *********" << std::endl;
		infile << "             *********" << std::endl;
	}
	infile.close();
}