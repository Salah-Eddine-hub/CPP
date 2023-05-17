/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:45:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/17 14:20:45 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char* av[]) {
	if (ac != 2){
		std::cerr << "Wrong num of argument!" << std::endl;
		return (0);
	}
	ScalarConverter convert(av[1]);
	return (1);
}