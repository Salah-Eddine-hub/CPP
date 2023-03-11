/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:51:26 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/10 20:54:24 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *zombie;
	Zombie zombie1;
	zombie1.setname("gecko");
	zombie1.announce();
	zombie = newZombie("foo");
	zombie->announce();
	delete zombie;
	randomChump("moria");
	return 0;
}