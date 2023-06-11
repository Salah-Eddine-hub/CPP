/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:20:23 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/24 08:48:20 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& copy);
	~Dog();
	void makeSound() const;
	void setType(std::string type);
	std::string getType() const;
private:
};
#endif