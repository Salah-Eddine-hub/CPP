/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:45:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/18 16:47:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char* av[]) {

	// std::string a = "2.3";
	// float str = atof(a.c_str());
	
	// std::stringstream ss;
	// ss << a;
	// ss >> str;
	// std::string str = ss.str();
	// std::cout << str << std::endl;
	if (ac != 2){
		std::cerr << "Wrong num of argument!" << std::endl;
		return (0);
	}
	ScalarConverter convert(av[1]);
	return (0);
}