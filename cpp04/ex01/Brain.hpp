/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:32:04 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/25 11:05:16 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <cstring>
#include <iostream>

class Brain{
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& copy);
	~Brain();
private:
	std::string ideas[100];
};

#endif