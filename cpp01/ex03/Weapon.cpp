/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:59:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/28 18:46:35 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_club){
	weapon_club = this->getType();
}
void Weapon::setType(std::string type){
	this->type = type;
	return ;
}

std::string const &Weapon::getType(){
	return (this->type);
}