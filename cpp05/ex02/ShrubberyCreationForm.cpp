/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:41:16 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/08 14:45:52 by sharrach         ###   ########.fr       */
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
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream infile;

	if (!infile)
		std::cerr << "the file couldn't open!!" << std::endl;
	if (executor.getGrade() < 137 && executor.getGrade() < 145){
		infile.open(this->getTarget() + "_Shrubbery");
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
	else
		throw GradeTooLowException();
	infile.close();
}