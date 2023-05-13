/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:06:39 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/11 12:00:11 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try{
		Bureaucrat bir("tano", 120);
		Bureaucrat bir2("bano", 20);
		Bureaucrat bir3("lano", 160);

		bir2 = bir;

		std::cout << bir << std::endl;
		std::cout << bir2 << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}