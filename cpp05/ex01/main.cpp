/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:06:39 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/10 12:46:31 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main() {
	try{
		Bureaucrat bir("tano", 10);
		Form kano("hh", 11, 9);

		std::cout << bir << std::endl;
		std::cout << kano << std::endl;
		std::cout << kano.getSign() << " <--------" << std::endl;
		kano.beSigned(bir);
		kano.setSign(true);
		std::cout << kano.getSign() << " <--------" << std::endl;
		bir.signForm(kano);
	}
	catch (std::exception& ex) {
		std::cout << ex.what();
	}
	return 0;
}