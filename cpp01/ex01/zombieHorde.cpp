/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:49:40 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/11 17:21:43 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
	Zombie *zombie;
	zombie = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombie[i].setname(name);
		zombie[i].announce();
	}
	return zombie;
}