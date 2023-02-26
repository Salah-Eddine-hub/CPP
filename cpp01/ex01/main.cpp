/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:48:58 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/26 15:59:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	// int j = 0;
	Zombie	*zombie;
	zombie = zombieHorde(5, "moria");
	delete[] zombie;
	while(1);
	return 0;
}