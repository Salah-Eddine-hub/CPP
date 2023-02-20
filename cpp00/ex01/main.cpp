/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:29:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 18:32:46 by sharrach         ###   ########.fr       */
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
	while(1){
		std::cout<< ">> ";
		std::getline(std::cin, hh);
		if (hh == "ADD"){
			phonelist.get_contact().getfirstname();
			phonelist.get_contact().getlastname();
			phonelist.get_contact().getnickname();
			phonelist.get_contact().getdarkestsecret();
			phonelist.get_contact().getnumber();
			continue;
		}
	}
	return 0;
}
