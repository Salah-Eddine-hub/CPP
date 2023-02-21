/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 23:09:37 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Contact.hpp"

class PhoneBook{
public:
	PhoneBook() = default;
	PhoneBook(Contact contacts){
		this->contacts = contacts;
	}
	// void add();
	Contact get_contact();
	// int	getindex();
	void set_contact(const Contact& contacts);
private:
	Contact contacts;
	int		i = 0;
};

#endif