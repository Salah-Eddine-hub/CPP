/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:29:52 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/26 18:40:52 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string string;
	std::string *stringPTR;
	std::string &stringREF;

	string = "HI THIS IS BRAIN";
	stringPTR = string;
	stringREF = string;
	std::cout << &string << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return 0;
}