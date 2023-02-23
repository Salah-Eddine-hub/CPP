/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:29:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/23 19:23:32 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	PhoneBook	phonelist;
	std::string	input;
	// int a = 0;
	
	(void)av;
	if (ac != 1){
		std::cerr << "Error: not valid state"<< std::endl;
		return 0;
	}
	std::cout << "           *****PhoneBook*****" << std::endl;
	while(input != "EXIT"){
		// std::cout << ++a << std::endl;
		// std::cout << input << std::endl;
		std::cout << ">>"; 
		
		if (!getline(std::cin, input))
			break;
		// if (std::cin.eof()) {
		// 	std::cerr << std::endl << "End of file reached." << std::endl;
		// 	return (0);
		// }
		if (input == "ADD"){
			phonelist.add_contact();
		}
		else if (input == "SEARCH"){
			phonelist.contact_search();
		}
		// std::cout << "heloo";
	}
	return 0;
}
