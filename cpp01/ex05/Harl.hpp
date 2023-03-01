/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:29:49 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/01 17:32:35 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <cstring>

class Harl{
public:
	void complain(std::string level);
private:
	void debug();
	void info();
	void warning();
	void error();
};

#endif