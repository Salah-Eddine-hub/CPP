/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:30:45 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/03 08:59:22 by sharrach         ###   ########.fr       */
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
		obj[i]->makeSound();
	}
	for(int i = 0; i < 10; i++){
		delete obj[i];
	}
	delete i;
	delete j;
	return 0;
}
