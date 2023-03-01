/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:18:14 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/01 14:58:10 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {
}
void HumanB::attack(){
	std::cout << this->name;
	std::cout << " attack with ";
	std::cout << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

std::string HumanB::getname(){
	return (this->name);
}

void HumanB::setname(std::string name){
	this->name = name;
}