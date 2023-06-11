/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:29:27 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/24 08:46:11 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& copy) {
	this->type = copy.type;
}

Animal& Animal::operator=(const Animal& copy) {
	std::cout << "Animal copy assignment operator" << std::endl;
	this->type = copy.type;
	return *this;
}

void Animal::makeSound() const{
	std::cout << "some Animal sound" << std::endl;
}

void Animal::setType(std::string type) {
	this->type = type;
}

std::string Animal::getType() const {
	return type;
}