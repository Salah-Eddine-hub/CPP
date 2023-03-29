/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:30:45 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/27 23:07:55 by sharrach         ###   ########.fr       */
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
		obj[y] = new Dog;
	}
	for (int s = 5; s < 10; s++) {
		obj[s] = new Cat;
	}
	
	for (int i = 0; i < 10; i++) {
		std::cout << obj[i]->getType() << std::endl;
		// std::cout << obj[i]->makeSound() << std::endl;
	}
	delete j;//should not create a leak
	delete i;

	return 0;
}
