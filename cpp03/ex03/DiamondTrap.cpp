/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:10:57 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 12:23:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap:DiamondTrap(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy constructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy) {
	std::cout << "DiamondTrap copy assignement operator" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor" << std::endl;
}