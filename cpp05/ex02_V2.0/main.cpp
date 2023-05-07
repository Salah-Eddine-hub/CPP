/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:02:26 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/07 20:33:19 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
int main(void) {
	try{
		Bureaucrat A1("ab", 20);
		Bureaucrat A11;
		AForm		A2("cd", -11, 15);
		ShrubberyCreationForm A3("A22");

		A3.execute(A1);
		A11.setGrade(12);
		std::cout << A1 << std::endl;
		std::cout << A11 << std::endl;
		std::cout << A2 << std::endl;
	}
	catch(std::exception& ex){
		std::cout << ex.what() << std::endl;
	}
	
}