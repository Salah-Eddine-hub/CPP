/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:29:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/23 16:27:32 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	PhoneBook	phonelist;
	std::string	input;
	
	(void)av;
	if (ac != 1){
		std::cerr << "Error: not valid state"<< std::endl;
		return 0;
	}
	std::cout << "           *****PhoneBook*****" << std::endl;
	while(1){
		std::cout<< ">> ";
		std::getline(std::cin, input);
		 if (std::cin.eof()) {
			std::cerr << "End of file reached." << std::endl;
			return (0);
		}
		if (input == "ADD"){
			phonelist.add_contact();
		}
		else if (input == "SEARCH"){
			phonelist.contact_search();
		}
		else if (input == "EXIT")
			break;
	}
	return 0;
}
