/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:31:27 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/10 22:55:48 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input) : input(input){
	the_result(input);
}

RPN::~RPN(){
}

int RPN::the_result(std::string input){
	int result;
	if (input.size() == 0)
		throw std::invalid_argument("Nothing there");
	if (input.size() == 1 && std::isdigit(input[0])){
		std::cout << input[0] << std::endl;
		return 1;
	}
	for(size_t i = 0; i < input.size(); i++){
		if (input[i] == ' ')
			i++;
		if(std::isdigit(input[i])){
			this->intstack.push(input[i] - 48);
		}
		if (input[i] == '-' || input[i] == '+' ||input[i] == '*' ||input[i] == '/'){
			if (this->intstack.size() >= 2){
				if (input[i] == '+'){
					int tmp = this->intstack.top();
					this->intstack.pop();
					int tmp2 = this->intstack.top();
					result = tmp2 + tmp;
					this->intstack.push(result);
				}
				else if (input[i] == '-'){
					int tmp = this->intstack.top();
					this->intstack.pop();
					int tmp2 = this->intstack.top();
					result = tmp2 - tmp;
					this->intstack.push(result);
				}
				else if (input[i] == '*'){
					int tmp = this->intstack.top();
					this->intstack.pop();
					int tmp2 = this->intstack.top();
					result = tmp2 * tmp;
					this->intstack.push(result);
				}
				else if (input[i] == '/'){
					int tmp = this->intstack.top();
					this->intstack.pop();
					int tmp2 = this->intstack.top();
					if (tmp == 0)
						throw std::invalid_argument("division with zero is impossible");
					result = tmp2 / tmp;
					this->intstack.push(result);
				}
			}
			else
				throw std::invalid_argument("Error");
		}
	}
	std::cout << result << std::endl;
	return 0;
}