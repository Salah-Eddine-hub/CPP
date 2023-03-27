/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:30:45 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/27 22:43:11 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal* obj[10];

	for (int y = 0; y < 5; y++) {
		std::cout << obj[y]->getType() << std::endl;
	}
	for (int s = 0; s < 5; s++) {
		delete obj[s];
	}
	delete j;//should not create a leak
	delete i;

	return 0;
}
