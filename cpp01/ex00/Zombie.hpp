/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:53:02 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/25 14:16:31 by sharrach         ###   ########.fr       */
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
}

Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif