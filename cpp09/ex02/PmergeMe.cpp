/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:33:11 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/10 04:29:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av, int size){
	merge_insert(av, size);
}

void PmergeMe::merge_insert(char **input, int size){
	// std::cout << "I am here hehe" << std::endl;
	for (int i = 1; i < size; i++){
		if (!std::isdigit(*input[i])){
			std::cout << input[i] << std::endl;
			throw std::invalid_argument("some argument not and int number");
		}
		this->vecsor.push_back(atoi(input[i]));
	}
	std::cout << "Before: ";
	std::vector<int>::iterator it = this->vecsor.begin();
	for (; it != this->vecsor.end(); ++it)
		std::cout << *it << " ";
	insert_sort(this->vecsor);
	std::cout << std::endl << "After: ";
	std::vector<int>::iterator ite = this->vecsor.begin();
	for (; ite != this->vecsor.end(); ++it)
		std::cout << *ite << " ";
	// std::cout << input[0] << std::endl;
}

void PmergeMe::insert_sort(std::vector<int> sorit){
	int size = sorit.size();
	for(int i = 0; i < size; i++){
		int tmp = sorit[i];
		int j = i - 1;
		while (j >= 0 && sorit[j] > tmp) {
			sorit[j + 1] = sorit[j];
			j--;
		}
		sorit[j + 1] = tmp;
	}
}

PmergeMe::~PmergeMe(){
}

