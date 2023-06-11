/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:05:37 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/01 18:13:50 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span{
public:
	Span();
	Span(unsigned int N);	
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& copy);
	void addNumber(int any);
	void addNumbers(int start, int end);
	int shortestSpan();
	int longestSpan();
private:
	std::vector<int> span;
	unsigned int N;
	class NoSpace : public std::exception{
		const char* what() const throw(){
			return "No more space left on the span";
		}
	};
	class NoNumbersthere : public std::exception{
		const char* what() const throw(){
			return "No numbers in the span";
		}
	};
	class InsufisantRange : public std::exception{
		const char* what() const throw(){
			return "Range is Invalid!!";
		}
	};
	
};
#endif