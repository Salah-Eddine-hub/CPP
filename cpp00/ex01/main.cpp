/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:29:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 23:46:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	PhoneBook	phonelist;
	std::string	hh;
	
	(void)av;
	if (ac != 1){
		std::cerr << "Error: not valid state"<< std::endl;
		return 0;
	}
	std::cout << "           *****PhoneBook*****" << std::endl;
	while(1){
		std::cout<< ">> ";
		std::getline(std::cin, hh);
		if (hh == "ADD"){
			phonelist.get_contact().setfirstname();
			phonelist.get_contact().setlastname();
			phonelist.get_contact().setnickname();
			phonelist.get_contact().setdarkestsecret();
			phonelist.get_contact().setnumber();
			continue;
		}
		if (hh == "SEARCH"){
			std::cout << phonelist.get_contact().getfirstname();
		}
	}
	return 0;
}
