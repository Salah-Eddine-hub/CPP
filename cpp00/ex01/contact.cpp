/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:58:43 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 18:33:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getfirstname(){
	std::string	hh;
	std::cout << ">> Enter the first name: ";
	std::getline(std::cin, hh);
	this->FirstName = hh;
	return FirstName;
}

std::string Contact::getlastname(){
	std::string	hh;
	std::cout << ">> Enter the lastname: ";
	std::cin >> this->LastName;
	return LastName;
}

std::string Contact::getnickname(){
	std::string	hh;
	std::cout << ">> Enter the nick name: ";
	std::getline(std::cin, hh);
	this->NickName = hh;
	return NickName;
}

std::string Contact::getdarkestsecret(){
	std::string	hh;
	std::cout << ">> Enter the darkest secret: ";
	std::getline(std::cin, hh);
	this->DarkestSecret = hh;
	return DarkestSecret;
}

std::string Contact::getnumber(){
	std::string	hh;
	std::cout << ">> Enter the phone number: ";
	std::getline(std::cin, hh);
	this->Number = hh;
	return Number;
}

void Contact::setfirstname(const std::string& FirstName){
	this->FirstName = FirstName;
}

void Contact::setlastname(const std::string& LastName){
	this->LastName = LastName;
}

void Contact::setnickname(const std::string& NickName){
	this->NickName = NickName;
}

void Contact::setdarkestsecret(const std::string& DarkestSecret){
	this->DarkestSecret = DarkestSecret;
}

void Contact::setnumber(const std::string& Number){
	this->Number = Number;
}
