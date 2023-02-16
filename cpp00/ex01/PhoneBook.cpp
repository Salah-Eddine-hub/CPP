/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/16 14:06:53 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	input;
	std::cout << "----------------Welcome to the PhoneBook-----------------" << std::endl;
	std::cout << "use a valid command " << std::endl;
	std::cout << "The valid command is : ADD - SEARCH - EXIT" << std::endl;
	std::cout << "YOUR COMMAND IS : ";
	std::cin >> input.message;
	if (strcmp(input.message, "ADD") == 0)
	{
		std::cout << "adding a new contact" << std::endl;
	}
	if (strcmp(input.message, "SEARCH") == 0)
	{
		std::cout << "let search togther" << std::endl;
	}
	if(strcmp(input.message, "EXIT") == 0)
	{
		exit(EXIT_SUCCESS);
		return (0);
	}
	std::cout << "not valid command" << std::endl;
	return 0;
}
