/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:46:38 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/03 08:57:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <cstring>
#include <iostream>

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& copy);
	virtual ~WrongAnimal();
	virtual void makeSound() const;
	virtual void setType(std::string type);
	virtual std::string getType() const;
protected:
	std::string type;
};


#endif