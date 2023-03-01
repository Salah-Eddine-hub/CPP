/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:50:24 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/01 14:51:34 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(std::string name, Weapon& weapon);
	void attack();
	void setname(std::string name);
	std::string getname() const;
private:
	Weapon& weapon;
	std::string name;
};

#endif