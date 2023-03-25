/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:32:25 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/25 11:32:30 by sharrach         ###   ########.fr       */
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
	*this = copy;
	return *this;
}
