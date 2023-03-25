/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:33:35 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/25 11:33:44 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
	Brain* brain;
};
#endif