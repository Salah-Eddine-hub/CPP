/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:18:42 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/21 18:37:36 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class Animal{
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& copy);
	~Animal();
	void setType(std::string type);
	std::string getType();
protected:
	std::string type;
private:
};
#endif