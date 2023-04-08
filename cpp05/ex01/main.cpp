/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:06:39 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/08 20:14:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main() {
	try{
		Bureaucrat bir("tano", 10);
		Form kano("hh", 50, 60);

		std::cout << bir << std::endl;
		std::cout << kano << std::endl;
		
		kano.beSigned(bir);
	}
	catch (std::exception& ex) {
		std::cout << ex.what();
	}
	return 0;
}