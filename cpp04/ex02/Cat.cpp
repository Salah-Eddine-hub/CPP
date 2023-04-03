/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:28:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/27 22:18:53 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain;
	*this->brain = *other.brain;
}

Cat& Cat::operator=(const Cat& copy){
	std::cout << "Cat copy assignement operator" << std::endl;
	this->type = copy.type;
	delete this->brain;
	this->brain = new Brain;
	*this->brain = *copy.brain;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

void Cat::setType(std::string type) {
	this->type = type;
}

std::string Cat::getType() const{
	return type;
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}
