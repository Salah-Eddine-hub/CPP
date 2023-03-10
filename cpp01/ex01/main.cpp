/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:48:58 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/10 20:32:11 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie	*zombie;
	zombie = zombieHorde(5, "moria");
	delete[] zombie;
	return 0;
}