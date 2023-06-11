/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:52:04 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/28 18:48:59 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string name);
	void attack();
	void setname(std::string name);
	std::string getname();
	void setWeapon(Weapon& weapon);
	std::string getWeapon();
private:
	Weapon* weapon;
	std::string name;
};

#endif
