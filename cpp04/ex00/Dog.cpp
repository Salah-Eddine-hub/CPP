/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:33:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/21 18:36:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& copy){
	std::cout << "Dog cop assignement operator" << std::endl;
}

void Dog::setType(std::string type) {
	this->type = type;
}

std::string Dog::getType() {
	return type;
}

void Dog::makeSound() {
	std::cout << "how how" << std::endl;
}