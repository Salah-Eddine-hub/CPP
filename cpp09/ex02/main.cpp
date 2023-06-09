/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:32:24 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/09 05:23:47 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char* av[]){
	if (ac != 2){
		std::cerr << "wrong num of argument " << std::endl;
		return 1;
	}
	return 0;
}