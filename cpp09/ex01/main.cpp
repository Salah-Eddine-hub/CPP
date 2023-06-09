/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:29:50 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/08 23:21:31 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char* av[]){
	if (ac != 2){
		std::cerr << "Error: wrong num of args" << std::endl;
		return 0;
	}
	try{
		RPN src(av[1]);
	}
	catch(std::invalid_argument& e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 1;
}