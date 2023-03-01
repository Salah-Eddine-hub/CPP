/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:59:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/01 15:00:52 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_club){
	this->type = weapon_club;
}

void Weapon::setType(std::string type){
	this->type = type;
	return ;
}

std::string const &Weapon::getType() const{
	return (this->type);
}