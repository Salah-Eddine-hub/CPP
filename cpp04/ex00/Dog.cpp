/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:33:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/24 08:50:59 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor" << std::endl;
	this->type = other.type;
}

Dog& Dog::operator=(const Dog& copy){
	std::cout << "Dog cop assignement operator" << std::endl;
	this->type = copy.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

void Dog::setType(std::string type) {
	this->type = type;
}

std::string Dog::getType() const{
	return type;
}

void Dog::makeSound() const {
	std::cout << "how how" << std::endl;
}