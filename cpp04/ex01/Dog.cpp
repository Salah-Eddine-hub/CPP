/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:28:35 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/03 10:39:22 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain;
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain;
	*this->brain = *other.brain;
}

Dog& Dog::operator=(const Dog& copy){
	std::cout << "Dog cop assignement operator" << std::endl;
	this->type = copy.type;
	delete this->brain;
	this->brain = new Brain;
	*this->brain = *copy.brain;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete brain;
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