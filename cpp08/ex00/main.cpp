/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:07:37 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/03 13:48:51 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <map>

int main(void){
	std::vector<int> f;

	for (size_t i = 0; i < 101; i++)
		f.push_back(i);

	easyfind(f, 100);
	return (0);
}