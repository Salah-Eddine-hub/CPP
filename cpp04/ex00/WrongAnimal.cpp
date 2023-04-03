/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:46:14 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/03 08:43:17 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	this->type = copy.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	std::cout << "WrongAnimal copy assignment operator" << std::endl;
	this->type = copy.type;
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "some WrongAnimal sound" << std::endl;
}

void WrongAnimal::setType(std::string type) {
	this->type = type;
}

std::string WrongAnimal::getType() const {
	return type;
}