/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:47:07 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/19 18:54:05 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
		: Hit_points(100), Energy_points(100), Attack_damage(30) {
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.Name, other.Hit_points, other.Energy_points, other.Attack_damage) {
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
	std::cout << "FragTrap copy assignement operator" << std::endl;
	this->Name = copy.Name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap desctructor" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "give me a high five 🙌" << std::endl;
}