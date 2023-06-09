/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:19:57 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/29 21:47:24 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void test(T& arg){
	std::cout << arg << std::endl;
}

int main(void) {
	int arr[] = {1, 3, 4, 6, 7, 8};

	Iter(arr, 4, test);
	return 0;
}