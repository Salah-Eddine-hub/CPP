/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:32:33 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/10 16:39:15 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <exception>
#include <time.h>
#include <vector>
#include <deque>

class PmergeMe{
public:
	PmergeMe(char **av, int size);
	~PmergeMe();

	void merge_insert(char **input, int size);
	template<typename Container>
	void insert_sort(Container& sorit);
	template<typename Container, class Iter>
	void merge_sort(Container& rsorit, Iter l, Iter r);
private:
	// template<typename Container>
	std::vector<int> vecsor;
	std::deque<int> deqso;

};

#endif