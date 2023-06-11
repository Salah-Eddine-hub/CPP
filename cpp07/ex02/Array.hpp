/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:29:24 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/29 20:50:24 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<class T>
class Array{
public:
	Array():array(0){
	}
	Array(unsigned int n){
		array = new T[n];
	}
	~Array(){
	}
	Array(const Array& other){
		*this = other;
	}
	Array& operator=(const Array& copy){
		delete *this;
		T one = new T[this->size];
		for (int i = 0; i < this->size; i++){
			this->array[i] = copy.array[i];
		}
		return (*this);
	}
	T& operator[](unsigned int index){
		if (index < 0 || index >= this->size){
			throw OutOfBound();
		}
		return(array[index]);
	}
	unsigned int Size(){
		return (this->size);
	}
private:
	T *array;
	unsigned int size;
	class OutOfBound : public std::exception {
		const char* what() const throw(){
			return "Index is out of bounds";
		}
	};
}; 
#endif