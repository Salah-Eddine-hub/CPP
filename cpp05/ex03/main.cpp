/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:02:26 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/09 15:32:55 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	try{
		Bureaucrat A1("ab", 5);
		Bureaucrat A11;
		ShrubberyCreationForm A3("A22");
		A1.executeForm(A3);
		RobotomyRequestForm A4("A44");
		PresidentialPardonForm A5("A55");
		AForm* Atest;
		Intern A6;

		Atest = A6.makeForm("Presidentidal Pardon", "bnech");
		A3.execute(A1);
		A4.execute(A1);
		A5.execute(A1);
		A1.setGrade(12);
		std::cout << A11 << std::endl;
		std::cout << A1 << std::endl;
	}
	catch(std::exception& ex){
		std::cout << ex.what() << std::endl;
	}
	return (0);
}