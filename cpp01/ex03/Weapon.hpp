/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:44:40 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/01 14:44:15 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cstring>

class Weapon{
public:
	Weapon(std::string weapon_club);
	void setType(std::string type);
	std::string const &getType() const;
private:
	std::string type;
};

#endif