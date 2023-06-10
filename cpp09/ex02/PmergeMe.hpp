/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:32:33 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/10 03:08:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <deque>

class PmergeMe{
public:
	PmergeMe(char **av, int size);
	~PmergeMe();

	void merge_insert(char **input, int size);
	void insert_sort(std::vector<int> sorit);
private:
	std::vector<int> vecsor;
	// std::deque<int> deqinso;

};

#endif