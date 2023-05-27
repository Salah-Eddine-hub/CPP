/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:03:25 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/23 19:42:13 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>
#include <string>

template< typename T>
const T& max(const T& x, const T & y){
	return (x >= y ? x : y);
}

template< typename T>
const T& min(const T & x, const T& y){
	return (x <= y ? x : y);
}

template< typename T>
void swap(T& x, T& y){
	T z = x;
	x = y;
	y = z;
}

#endif