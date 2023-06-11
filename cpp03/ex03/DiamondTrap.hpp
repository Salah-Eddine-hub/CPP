/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:11:01 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 18:54:50 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <cstring>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
public:
	DiamondTrap();
	DiamondTrap( )
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& copy);
	~DiamondTrap();
private:
	std::string name;
};
#endif