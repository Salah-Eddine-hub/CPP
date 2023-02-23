/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/23 16:40:29 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->i = 0;
	this->n = 0;
}

Contact	PhoneBook::get_contact(int i){
	return (this->contacts[i]);
}

void PhoneBook::contact_search(){
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "index";
	std::cout << "|" << std::setw(10) << std::right << "first name";
	std::cout << "|" << std::setw(10) << std::right << "last name";
	std::cout << "|" << std::setw(10) << std::right << "nick name";
	std::cout << "|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	for(int i = 0; i < this->n; i++)
	{
		if (i < 8)
		{
			std::cout << "|";
			std::cout << std::setw(10) << std::right << i;
			std::cout << "|";
			if (this->get_contact(i).getfirstname().size() > 10)
				std::cout << this->get_contact(i).getfirstname().substr(0, 9) + ".";
			else
				std::cout << std::setw(10)<< std::right << this->get_contact(i).getfirstname();
			std::cout << "|";
			if (this->get_contact(i).getlastname().size() > 10)
				std::cout << this->get_contact(i).getlastname().substr(0, 9) + ".";
			else
				std::cout << std::setw(10)<< std::right << this->get_contact(i).getlastname();
			std::cout << "|";
			if (this->get_contact(i).getnickname().size() > 10)
				std::cout << this->get_contact(i).getnickname().substr(0, 9) + ".";
			else
				std::cout << std::setw(10)<< std::right << this->get_contact(i).getnickname();
			std::cout << "|";
			std::cout << std::endl;
			std::cout << " -------------------------------------------" << std::endl;
		}
	}
	int	choice;
	std::cout << "Enter a valid number: ";
	std::cin >> choice;
	std::cout << choice << std::endl ;
	if (!isdigit(choice) || (choice > 7 || choice < 0) || choice >= this->n){
		std::cout << "not valid choice." << std::endl;
		return ;
	}
	std::cout << "first name : " << this->get_contact(choice).getfirstname() << std::endl;
	std::cout << "last name : " << this->get_contact(choice).getlastname() << std::endl;
	std::cout << "nick name : " << this->get_contact(choice).getnickname() << std::endl;
	std::cout << "darkest secret: " << this->get_contact(choice).getdarkestsecret() << std::endl;
	std::cout << "phone number: " << this->get_contact(choice).getnumber() << std::endl;
}

void PhoneBook::add_contact(){
	Contact		contact;
	std::string input;
	
	std::cout << ">> Enter the first name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	contact.setfirstname(input);
	
	std::cout << ">> Enter the last name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	contact.setlastname(input);
	
	std::cout << ">> Enter the nickname: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	contact.setnickname(input);
	
	std::cout << ">> Enter the darkest secret: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	contact.setdarkestsecret(input);
	
	std::cout << ">> Enter the phone number: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	contact.setnumber(input);
	if (contact.getnumber().empty() || contact.getfirstname().empty() || contact.getlastname().empty()
		|| contact.getdarkestsecret().empty() || contact.getnickname().empty()){
			std::cerr << "you can't add this contact" << std::endl;
			return ;
		}
	std::cout << "contact added" << std::endl;
	this->contacts[this->i++] = contact;
	this->n ++;
	if (this->i > 7)
		this->i = 0;
}
