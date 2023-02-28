/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:28:06 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/28 18:56:14 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon){
	name = this->getname();
	weapon = this->weapon;
}

void HumanA::attack(){
	weapon->getType();
}

void HumanA::setname(std::string name){
	this->name = name;
}

std::string HumanA::getname(){
	return (this->name);
}