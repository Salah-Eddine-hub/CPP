/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:15 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/19 18:56:06 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
		: Hit_points(10), Energy_points(10), Attack_damage(0) {
	std::cout << "ClapTrap default constructor hh" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
		: Name(name), Hit_points(10), Energy_points(10), Attack_damage(0) {
	std::cout << "ClapTrap constructor haha" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitpoint, int energy, int attack) : 
	Name(name), Hit_points(hitpoint), Energy_points(energy), Attack_damage(attack) {
	std::cout << "ClapTrap constructor222 haha" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor yea" << std::endl;
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap assignement operator hihi" << std::endl;
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor hehe" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (Energy_points <= 0){
		Energy_points = 0;
		std::cout << "Can't attack cause of Energy_point is: " << Energy_points << std::endl;
	}
	else{
		std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " point of dammage" << std::endl;
		Energy_points--;
		std::cout << "Energy point is: " << Energy_points << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (Hit_points <= 0){
		Hit_points = 0;
		std::cout << "ClapTrap " << Name << " died:(" << std::endl;
		return ;
	}

	Hit_points -= amount;
	std::cout << "ClapTrap " << Name << " took " << amount << " damage" << std::endl;
	if (Hit_points <= 0) {	
		Hit_points = 0;
		std::cout << "ClapTrap " << Name << " died:(" << std::endl;
	}
	
	std::cout << "Energy_points is: " << Energy_points << std::endl;
	std::cout << "Hit_points is: " << Hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (Energy_points <= 0) {
		std::cout << "ClapTrap " << Name << " can't be repaired a cause of Energy point is: " << Energy_points << std::endl;
		return ;
	}
	Hit_points += amount;
	if (Hit_points > 10){
		Hit_points = 10;
	}
	std::cout << "ClapTrap get " << amount << " Hit_points" << std::endl;
	std::cout << "new HitPoint " << Hit_points << std::endl;
	Energy_points--;
	std::cout << "your Energy point now is: " << Energy_points << std::endl;
}