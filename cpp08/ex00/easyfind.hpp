/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:07:03 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/31 13:39:57 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


template<typename T>
void easyfind(T type, int two){
	typename T::iterator it = type.begin();
	it = std::find(type.begin(), type.end(), two);
	if (type.end() == it)
		std::cout << "Not Found " << std::endl;
	else
		std::cout << "Found it" << std::endl;
}

#endif