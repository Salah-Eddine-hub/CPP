/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:39:15 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/03 08:45:15 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "WrongCat copy constructor" << std::endl;
	this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& copy){
	std::cout << "WrongCat copy assignement operator" << std::endl;
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::setType(std::string type) {
	this->type = type;
}

std::string WrongCat::getType() const{
	return type;
}

void WrongCat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}