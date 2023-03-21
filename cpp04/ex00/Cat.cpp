/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:39:27 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/21 18:36:13 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& copy){
	std::cout << "Cat cop assignement operator" << std::endl;
}

void Cat::setType(std::string type) {
	this->type = type;
}

std::string Cat::getType() {
	return type;
}

void Cat::makeSound() {
	std::cout << "Meeeeeow" << std::endl;
}