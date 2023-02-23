/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:58:43 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/23 12:29:12 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setfirstname(std::string firstname){
	this->FirstName = firstname;
}

void Contact::setlastname(std::string lastname){
	this->LastName = lastname;
}

void Contact::setnickname(std::string nickname){
	this->NickName = nickname;
}

void Contact::setdarkestsecret(std::string darkestsecret){
	this->DarkestSecret = darkestsecret;
}

void Contact::setnumber(std::string number){
	this->Number = number;
}

	// std::string Number;
	// std::cout << ">> Enter the phone number: ";
	// std::getline(std::cin, Number);

std::string Contact::getfirstname() const{
	return this->FirstName;
}

std::string Contact::getlastname() const{
	return this->LastName;
}

std::string Contact::getnickname() const{
	return this->NickName;
}

std::string Contact::getdarkestsecret() const{
	return this->DarkestSecret;
}

std::string Contact::getnumber() const{
	return this->Number;
}
