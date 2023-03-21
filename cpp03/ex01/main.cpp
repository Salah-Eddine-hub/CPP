/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:37:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 18:09:20 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap scav;

	scav.attack("me");
	scav.guardGate();
	scav.beRepaired(23);
	scav.takeDamage(22);
	scav.attack("black");
}