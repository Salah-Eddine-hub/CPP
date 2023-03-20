/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:20:08 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 16:13:01 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap clap;
	// ClapTrap rie("ehh", 2, 3, 4);
	clap.attack("obama");
	
	// clap.beRepaired(9);
	// rie.takeDamage(2);
	// rie.beRepaired(5);
	// rie.attack("trump");
	clap.takeDamage(11);
	// clap.takeDamage(3);
	// clap.beRepaired(2);
	// clap.takeDamage(5);
	// clap.beRepaired(2);
	// clap.attack("salah");
	// clap.attack("salah");
	// clap.attack("salah");
	// clap.attack("salah");
	// clap.beRepaired(2);
	// clap.beRepaired(2);
	// clap.attack("salah");
	// clap.takeDamage(4);

	return 0;
}