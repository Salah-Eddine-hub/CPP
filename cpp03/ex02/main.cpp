/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:46:02 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 18:10:34 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap tap;
	ScavTrap dap;

	tap.highFivesGuys();
	tap.attack("me");
	tap.takeDamage(3);
	dap.attack("me");
	tap.beRepaired(2);
	
	return 0;
}
