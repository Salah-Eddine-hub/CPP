/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 08:57:30 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/10 17:07:16 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try{
		Bureaucrat haha("hello", 110);
		PresidentialPardonForm yes("no");
		yes.execute(haha);
	}
	catch (std::exception& ex){
		std::cout << ex.what();
	}
	return 0;
}