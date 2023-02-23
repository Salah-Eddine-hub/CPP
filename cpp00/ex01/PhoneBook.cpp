/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/23 12:54:45 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->i = 0;
}

Contact	PhoneBook::get_contact(int i){
	return (this->contacts[i]);
}

void PhoneBook::contact_search(){
	
	for(int i = 0; i < 8; i++)
	{
		std::cout << "|";
		std::cout << this->get_contact(i).getfirstname();
		std::cout << "|";
		std::cout << this->get_contact(i).getlastname();
		std::cout << "|";
		std::cout << this->get_contact(i).getnickname();
		std::cout << "|";
		std::cout << this->get_contact(i).getdarkestsecret();
		std::cout << "|";
		std::cout << this->get_contact(i).getnumber();
		std::cout << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::add_contact(){
	Contact		contact;
	std::string input;
	
	std::cout << ">> Enter the first name: ";
	std::getline(std::cin, input);
	contact.setfirstname(input);
	
	std::cout << ">> Enter the last name: ";
	std::getline(std::cin, input);
	contact.setlastname(input);
	
	std::cout << ">> Enter the nickname: ";
	std::getline(std::cin, input);
	contact.setnickname(input);
	
	std::cout << ">> Enter the darkest secret: ";
	std::getline(std::cin, input);
	contact.setdarkestsecret(input);
	
	std::cout << ">> Enter the phone number: ";
	std::getline(std::cin, input);
	contact.setnumber(input);
	
	this->contacts[this->i++] = contact;
	if (this->i > 7)
		this->i = 0;
}
