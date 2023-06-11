/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:07:47 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/29 20:49:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	try{
		// Array<int> test(10);
		
		// for (unsigned long i = 0; i < 10; i++){
		// 	test[i] = i;
		// 	std::cout << test[i] << std::endl;
		// }
		Array<char> test1(10);
		
		for (unsigned long j = 0; j < 10; j++){
			test1[j] = j + 48;
			std::cout << test1[j] << std::endl;
		}
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
}