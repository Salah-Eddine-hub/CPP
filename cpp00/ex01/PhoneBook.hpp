/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 18:44:17 by sharrach         ###   ########.fr       */
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
	Contact get_contact();
	void set_contact(const Contact& contacts);
	PhoneBook(Contact contacts){
		this->contacts = contacts;
	}
private:
	Contact contacts;
};


#endif