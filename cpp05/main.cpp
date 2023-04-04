/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:06:39 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/04 11:34:43 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try{
		Bureaucrat bir("tano", 120);
		std::cout << bir << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << "bir" << ex.what();
	}
}