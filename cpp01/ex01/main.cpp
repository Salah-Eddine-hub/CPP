/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:48:58 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/12 11:28:15 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie	*zombie;
	int		size;

	size = 10;
	if (size < 0)
		return (1);
	zombie = zombieHorde(size, "moria");
	delete[] zombie;
	return 0;
}