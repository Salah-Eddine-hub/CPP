/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:58:43 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 23:45:58 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setfirstname(){
	std::string FirstName;
	std::cout << ">> Enter the first name: ";
	std::getline(std::cin, FirstName);
	this->FirstName = FirstName;
}

void Contact::setlastname(){
	std::string LastName;
	std::cout << ">> Enter the lastname: ";
	std::getline(std::cin, LastName);
	this->LastName = LastName;
}

void Contact::setnickname(){
	std::string NickName;
	std::cout << ">> Enter the nick name: ";
	std::getline(std::cin, NickName);
	this->NickName = NickName;
}

void Contact::setdarkestsecret(){
	std::string DarkestSecret;
	std::cout << ">> Enter the darkest secret: ";
	std::getline(std::cin, DarkestSecret);
	this->DarkestSecret = DarkestSecret;
}

void Contact::setnumber(){
	std::string Number;
	std::cout << ">> Enter the phone number: ";
	std::getline(std::cin, Number);
	this->Number = Number;
}

std::string &Contact::getfirstname(){
	std::cout << this->FirstName;
	return this->FirstName;
}

std::string Contact::getlastname(){
	return this->LastName;
}

std::string Contact::getnickname(){
	return this->NickName;
}

std::string Contact::getdarkestsecret(){
	return this->DarkestSecret;
}

std::string Contact::getnumber(){
	return this->Number;
}
