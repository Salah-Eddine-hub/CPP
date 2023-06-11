/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:47:54 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/11 17:23:07 by sharrach         ###   ########.fr       */
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
	std::cout << "I am destructor " << this->name <<std::endl;
}