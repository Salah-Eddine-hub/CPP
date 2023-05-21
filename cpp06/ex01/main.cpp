/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:32:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/21 17:17:37 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	Data* data = new Data();
	Serializer raw;
	
	data->setfloat(4.55f);
	data->setint(4);
	std::cout << sizeof(data) << std::endl;
	std::cout << data->getfloat() << std::endl;
	std::cout << data->getint() << std::endl;
	uintptr_t f = raw.serialize(data);
	std::cout << f << std::endl;
	std::cout << f << std::endl;
	Data* d = raw.deserialize(f);
	std::cout << "float: " << d->getfloat() << std::endl;
	std::cout << "int: " << d->getint() << std::endl;
	
	return 0;
}