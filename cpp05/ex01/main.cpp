/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:06:39 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/06 07:00:30 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try{
		Bureaucrat bir("tano", 120);
		Form kano;
		kano.getName() = "hh";
		std::cout << bir << std::endl;
		std::cout << kano << std::endl;
		kano.getSign();
		// Form kano("harry", 13, 33);
		// std::cout << kano << std::endl;
		bir.signForm(kano);
		// bir.signForm(kano);
		kano.beSigned(bir);
	}
	catch (std::exception& ex) {
		std::cout  << ex.what();
	}
	return 0;
}