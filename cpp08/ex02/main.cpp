/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:15:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/03 17:32:04 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	std::cout << "the size of stack is: " << mstack.size() << std::endl;
	mstack.push(17);
	std::cout << "the top of stack is: " << mstack.top() << std::endl;
	mstack.pop();
	mstack.push(3);
	std::cout << "the size of stack is: " << mstack.size() << std::endl;
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	// std::cout << "the mstack value there is: " << *it << std::endl;
	--it;
	// std::cout << "the mstack value there is: " << *it << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}