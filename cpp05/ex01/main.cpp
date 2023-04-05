/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:06:39 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/05 14:27:13 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try{
		Bureaucrat bir("tano", 120);
		std::cout << bir << std::endl;
		Form kano("harry", 13, 33);
		std::cout << kano << std::endl;
		bir.signForm(kano);
		kano.beSigned(bir);
	}
	catch (std::exception& ex) {
		std::cout  << ex.what();
	}
}