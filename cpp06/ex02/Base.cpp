/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:14:52 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/23 16:08:51 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(){
	// std::cout << "Base default constructor" << std::endl;
}

Base::~Base(){
	// std::cout << "Base destructor" << std::endl;
}

Base* generate(void){
	int random;
	srand(time(NULL));
	random = 1 + rand() % 3;
	switch(random){
		case 1:
			return (new A());
		case 2:
			return (new B());
		case 3:
			return (new C());
		default :
			 return (NULL);
	}
}

void identify(Base* p){
	A* a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	B* b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	C* c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}


void identify(Base& p) {
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A." << std::endl;
	} catch (std::bad_cast& bc) {
		try {
			(void) dynamic_cast<B&>(p);
			std::cout << "B." << std::endl;
		} catch (std::bad_cast& bc) {
			try {
				(void) dynamic_cast<C&>(p);
				std::cout << "C." << std::endl;
			} catch (std::bad_cast& bc) {
				return;
			}
			return ;
		}
		return ;
	}

	
}
