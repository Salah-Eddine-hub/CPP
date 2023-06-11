/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:16:06 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/11 00:32:29 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char* av[]) {
	if (ac != 2){
		std::cerr << "Error: could not open file." << std::endl;
		return 0;
	}
	if(strcmp(av[1], "input.csv") != 0){
		std::cerr << "Error: filename incorrect." << std::endl;
		return (0);
	}
	BitcoinExchange btc("data.csv");
	btc.get_values("input.csv");

	return (0);
}