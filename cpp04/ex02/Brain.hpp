/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:32:38 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/25 11:32:43 by sharrach         ###   ########.fr       */
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
