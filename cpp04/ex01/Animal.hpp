/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:27:55 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/03 07:12:58 by sharrach         ###   ########.fr       */
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
	virtual ~Animal();
	virtual void makeSound() const;
	virtual void setType(std::string type);
	virtual std::string getType() const;
protected:
	std::string type;
};
#endif
