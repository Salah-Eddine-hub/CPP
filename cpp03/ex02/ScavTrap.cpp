/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:53 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 16:22:26 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap default constuctor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructor" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.Name, other.Hit_points, other.Energy_points, other.Attack_damage) {
	std::cout << "ScavTrap copy constructor!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
	std::cout << "ScavTrap copy assignement operator!" << std::endl;
	this->Name = copy.Name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (Energy_points <= 0){
		Energy_points = 0;
		std::cout << "Can't attack cause of Energy_point is: " << Energy_points << std::endl;
	}
	else{
		std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << Attack_damage << " point of dammage" << std::endl;
		Energy_points--;
		std::cout << "Energy point is: " << Energy_points << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is on Gate Keeper mode" << std::endl;
}