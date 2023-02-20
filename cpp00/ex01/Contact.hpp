/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:43:16 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 18:43:23 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>


class Contact{
public:
//getter
	std::string getfirstname();
	std::string getlastname();
	std::string getnickname();
	std::string getdarkestsecret();
	std::string getnumber();
//setter
	void setfirstname(const std::string& FirstName);
	void setlastname(const std::string& LastName);
	void setnickname(const std::string& NickName);
	void setdarkestsecret(const std::string& DarkestSecret);
	void setnumber(const std::string& Number);
	Contact(std::string FirstName, std::string LastName, std::string NickName, std::string DarkestSecret, std::string Number){
		this->FirstName = FirstName;
		this->LastName = LastName;
		this->NickName = NickName;
		this->DarkestSecret = DarkestSecret;
		this->Number = Number;
	}
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	std::string	Number;
};

#endif