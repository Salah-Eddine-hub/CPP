/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:49:05 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/26 13:54:00 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class Zombie{
public:
	Zombie();
	~Zombie();
	std::string getname();
	void setname(std::string name);
	void announce();
private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string name);
#endif