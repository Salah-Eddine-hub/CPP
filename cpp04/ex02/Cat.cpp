/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:32:54 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/25 11:32:59 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor" << std::endl;
	this->type = other.type;
}

Cat& Cat::operator=(const Cat& copy){
	std::cout << "Cat copy assignement operator" << std::endl;
	this->type = copy.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
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

