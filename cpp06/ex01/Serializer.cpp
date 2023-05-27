/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:28:49 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/22 11:44:03 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
}

Serializer::~Serializer(){
}

Data::Data(){
	
}

Data::~Data() {
}

uintptr_t Serializer::serialize(Data* data){
	uintptr_t ptr;
	
	ptr = reinterpret_cast<uintptr_t> (data);
	return (ptr);
}


Data* Serializer::deserialize(uintptr_t raw) {
	Data *data;

	data = reinterpret_cast<Data *> (raw);
	return (data);
}

void Data::setint(int in) {
	this->i = in;
}

void Data::setfloat(float fl) {
	this->f = fl;
}

void Data::setdouble(double db) {
	this->d = db;
}

void Data::setchar(char ch) {
	this->c = ch;
}

void Data::setbool(bool boo) {
	this->b = boo;
}

int Data::getint() {
	return (this->i);
}

float Data::getfloat() {
	return (this->f);
}

double Data::getdouble() {
	return (this->d);
}

char Data::getchar() {
	return (this->c);
}

bool Data::getbool() {
	return (this->b);
}
