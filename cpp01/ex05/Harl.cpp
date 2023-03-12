/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:32:40 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/11 18:08:57 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
	std::cout << DEBUG << std::endl;
}

void Harl::info(){
	std::cout << INFO << std::endl;
}

void Harl::warning(){
	std::cout << WARNING << std::endl;
}

void Harl::error(){
	std::cout << ERROR << std::endl;
}

//implementation of pointer to member fonction
void Harl::complain(std::string level) {
	std::string lvl[4] = {"debug","info","warning","error"};

	void (Harl::*fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++) {
		if (level == lvl[i])
			(this->*(fun[i]))();
	}
}