/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/20 23:09:56 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact PhoneBook::get_contact(){
	return (contacts);
}

void PhoneBook::set_contact(const Contact& contacts){
	this->contacts = contacts;
}

// int PhoneBook::getindex(){
// 	return (i);
// }
// void PhoneBook::add(){	
// }
