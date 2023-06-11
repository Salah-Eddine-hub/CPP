/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:30:21 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/08 23:18:35 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include <string>
#include <stack>
#include <exception>

class RPN{
public:
	RPN(std::string input);
	~RPN();
	int the_result(std::string input);
	// std::string getInput();
private:
	std::stack<int> intstack;
	std::string input;
};



#endif