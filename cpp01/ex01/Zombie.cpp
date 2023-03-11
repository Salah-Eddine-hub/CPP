/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:49:20 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/11 17:23:27 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

void Zombie::setname(std::string name){
	this->name = name;
}

std::string Zombie::getname(){
	return (this->name);
}

Zombie::~Zombie(){
	std::cout << "I am Destructor " << this->name << std::endl;
}