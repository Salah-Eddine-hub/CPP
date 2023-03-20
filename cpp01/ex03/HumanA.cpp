/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:28:06 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 15:22:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

void HumanA::attack(){
	std::cout << this->getname();
	std::cout << " attack with ";
	std::cout << weapon.getType() << std::endl;
}

void HumanA::setname(std::string name){
	this->name = name;
}

std::string HumanA::getname() const{
	return (this->name);
}