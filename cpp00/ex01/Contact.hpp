/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:43:16 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/26 12:09:37 by sharrach         ###   ########.fr       */
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
//getters
	std::string getfirstname() const;
	std::string getlastname() const;
	std::string getnickname() const;
	std::string getdarkestsecret() const;
	std::string getnumber() const;
//setters
	void setfirstname(std::string firstname);
	void setlastname(std::string lastname);
	void setnickname(std::string nickname);
	void setdarkestsecret(std::string darkestsecret);
	void setnumber(std::string number);
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	std::string	Number;
};

#endif