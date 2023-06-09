/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:49:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/03 17:31:56 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack(){}
	typedef typename std::stack<T>::container_type::iterator iterator;
	~MutantStack(){}
	MutantStack(const MutantStack& other){
		*this = other;
	}
	MutantStack& operator=(const MutantStack& copy){
		*this = copy;
		return (*this);
	}
	iterator begin(){
		return (this->c.begin());
	}
	iterator end(){
		return (this->c.end());
	}
private:
};

#endif