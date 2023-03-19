/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:46:02 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/19 18:03:46 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap tap;

	tap.highFivesGuys();
	tap.attack("me");
	tap.takeDamage(3);
	tap.beRepaired(2);
	
	return 0;
}
