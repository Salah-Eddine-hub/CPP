/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:33:11 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/10 23:01:35 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av, int size){
	merge_insert(av, size);
}

bool verify_number(char *str)
{
	for (size_t i = 0; i < strlen(str); i++)
	{
		if(std::isdigit(str[i]) == 0)
			return 0;
	}
	return 1;
}

void PmergeMe::merge_insert(char **input, int size){
	std::cout << "Before: ";
	for (int i = 1; i < size; i++){
		if (!verify_number(input[i]) || atoi(input[i]) < 0 || atoi(input[i]) > INT_MAX){
			std::cout << input[i] << std::endl;
			throw std::invalid_argument("There is no after cause some argument not an int or posint number");
		}
		this->vecsor.push_back(atoi(input[i]));
		this->deqso.push_back(atoi(input[i]));

		std::cout << this->vecsor.back() << " ";
	}
	clock_t t, e;
	t = clock();
	merge_sort(this->vecsor, this->vecsor.begin(), this->vecsor.end());
	e = clock();

	clock_t f,l;
	f = clock();
	merge_sort(this->deqso, this->deqso.begin(), this->deqso.end());
	l = clock();
	std::cout << std::endl << "After: ";
	std::vector<int>::iterator ite = this->vecsor.begin();
	for (; ite != this->vecsor.end(); ++ite)
		std::cout << *ite << " ";
	std::cout << std::endl << "Time to process a range of " << this->vecsor.size() << " elements with std::vector: " << static_cast<double>(e - t) / CLOCKS_PER_SEC * 1000 << " us" << std::endl;
	std::cout << "Time to process a range of " << this->deqso.size() << " elements with std::deque: " << static_cast<double>(l - f) / CLOCKS_PER_SEC * 1000 << " us" << std::endl;
}

template<typename Container>
void PmergeMe::insert_sort(Container& sorit){
	int size = sorit.size();
	for(int i = 1; i < size; i++){
		int tmp = sorit[i];
		int j = i - 1;
		while (j >= 0 && sorit[j] > tmp) {
			sorit[j + 1] = sorit[j];
			j--;
		}
		sorit[j + 1] = tmp;
	}
}

template<typename Container, class Iter>
void PmergeMe::merge_sort(Container& rsorit, Iter begin, Iter end){
	if (end - begin <= 10)
	{
		Container tmp;
		typename Container::iterator it = begin;
		for (; it != end; ++it) {
			tmp.push_back(*it);
		}
		insert_sort(tmp);
		typename Container::iterator ite = tmp.begin();
		for (; ite != tmp.end(); ++ite) {
			*begin = *ite;
			++begin;
		}
	}
	else{
		Iter m = begin + (end - begin) / 2;
		merge_sort(rsorit, begin, m);
		merge_sort(rsorit, m, end);
		std::inplace_merge(begin, m, end);
		
	}
}


PmergeMe::~PmergeMe(){
}

