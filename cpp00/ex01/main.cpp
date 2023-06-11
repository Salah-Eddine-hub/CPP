/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:29:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/26 12:13:52 by sharrach         ###   ########.fr       */
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
	while(input != "EXIT"){
		std::cout << ">>"; 
		
		if (!std::getline(std::cin, input))
			break;
		if (input == "ADD"){
			phonelist.add_contact();
		}
		else if (input == "SEARCH"){
			phonelist.contact_search();
		}
	}
	return 0;
}
