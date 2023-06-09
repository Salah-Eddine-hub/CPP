/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:05:10 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/01 18:14:54 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
	std::cout << "Span default constructor" << std::endl;
}

Span::Span(unsigned int num) : N(num){}

Span::Span(const Span& other){
	std::cout << "Span copy constructor" << std::endl;
	this->N = other.N;
	this->span = other.span;
}

Span& Span::operator=(const Span& copy){
	this->span = copy.span;
	this->N = copy.N;
	return (*this);
}

void Span::addNumber(int any){
	if (span.size() + 1 > N)
		throw NoSpace();
	this->span.push_back(any);
}

void Span::addNumbers(int start, int end){
	if (start >= end)
		throw InsufisantRange();
	for (; start <= end ; start++){
		if ((end - start) > (int)N)
			throw InsufisantRange();
		span.push_back(start);
	}
	
}

int Span::longestSpan(){
	if (span.empty() || span.size() == 1)
		throw NoNumbersthere();
	std::sort(span.begin(), span.end());
	return (span.back() - span.front());
}

int Span::shortestSpan(){
	if (span.empty() || span.size() == 1)
		throw NoNumbersthere();
	int x = INT_MAX;
	std::sort(span.begin(), span.end());
	std::vector<int> tmp = this->span;
	for (size_t i = 0; i < tmp.size() - 1; i++){
		if (tmp[i + 1] - tmp[i] < x)
			x = tmp[i + 1] - tmp[i];
	}
	return x;
}

Span::~Span() {
	std::cout << "Span destructor" << std::endl;
}