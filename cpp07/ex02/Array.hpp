/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:29:24 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/27 17:15:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARAY_HPP

#include <iostream>

template<typename T>
class Array{
public:
	Array(){
		array = 0;
	}
	~Array();
private:
	T *array;
}; 
#endif