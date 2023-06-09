/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:31:27 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/09 05:01:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input) : input(input){
	the_result(input);
}

RPN::~RPN(){
}

// std::string RPN::getInput(){
// 	return (this->input);
// }

int RPN::the_result(std::string input){
	unsigned long signbr = 0;
	int result;
	if (input.size() == 0)
		throw std::invalid_argument("Nothing there");
	for(size_t i = 0; i < input.size(); i++){
		if (input[i] == ' ')
			i++;
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
			signbr++;
		if(std::isdigit(input[i])){
			this->intstack.push(input[i] - 48);
			std::cout << "lett see waht we have here: " << this->intstack.top() << std::endl;
		}
		else if(!std::isdigit(input[i]) && (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/')){
			std::cout << "that is mystring:  " << "[" <<input[i] << "]" << std::endl;
			throw std::invalid_argument("out of context");
		}
		// std::cout << "stack size:" << this->intstack.size() << std::endl;
		if (this->intstack.size() >= 2 && input[i] == '+'){
			int tmp = this->intstack.top();
			this->intstack.pop();
			int tmp2 = this->intstack.top();
			result = tmp2 + tmp;
			this->intstack.push(result);
		}
		else if (this->intstack.size() >= 2 && input[i] == '-'){
			int tmp = this->intstack.top();
			this->intstack.pop();
			int tmp2 = this->intstack.top();
			result = tmp2 - tmp;
			this->intstack.push(result);
		}
		else if (this->intstack.size() >= 2 && input[i] == '*'){
			int tmp = this->intstack.top();
			this->intstack.pop();
			int tmp2 = this->intstack.top();
			result = tmp2 * tmp;
			this->intstack.push(result);
		}
		else if (this->intstack.size() >= 2 && input[i] == '/'){
			int tmp = this->intstack.top();
			this->intstack.pop();
			int tmp2 = this->intstack.top();
			if (tmp == 0)
				throw std::invalid_argument("division with zero is impossible");
			result = tmp2 / tmp;
			this->intstack.push(result);
		}
	}
	if (this->intstack.size() != signbr + 1 )
		throw std::invalid_argument("number of sign invalid");
	std::cout << result << std::endl;
	return 0;
}