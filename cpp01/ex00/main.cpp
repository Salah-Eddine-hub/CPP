/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:51:26 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/25 14:33:16 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *zombie;
	zombie = newZombie("foo");
	zombie.announce();
	zombie.randomChump("foo");
	delete zombie;
	return 0;
}