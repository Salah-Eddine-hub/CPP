/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:32:00 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/27 21:59:44 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
	std::cout << "copy assignement operator" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = copy.ideas[i];
	}
	return *this;
}