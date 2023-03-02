/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:32:40 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/02 14:31:47 by sharrach         ###   ########.fr       */
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

void Harl::complain(std::string level){
	
}