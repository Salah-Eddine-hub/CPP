/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:33:06 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/25 11:33:14 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& copy);
	~Cat();
	void makeSound() const;
	void setType(std::string type);
	std::string getType() const;
private:
	Brain* brain;
};

#endif