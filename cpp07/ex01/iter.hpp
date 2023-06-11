/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:20:05 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/26 17:20:34 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void Iter(T *array, size_t lenght, void (*func)(T&)){
	for (size_t i = 0; i <= lenght; i++){
		func(array[i]);
	}
}

#endif