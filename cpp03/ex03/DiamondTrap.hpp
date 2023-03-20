/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:11:01 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 14:30:32 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <cstring>
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap{
public:
	DiamondTrap();
	DiamondTrap(ClapTrap::Name, )
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& copy);
	~DiamondTrap();
private:
	std::string name;
};
#endif