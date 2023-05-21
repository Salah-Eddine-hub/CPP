/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:30:45 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/21 15:18:29 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Data{
public:
	Data();
	~Data();
	void setint(int in);
	void setfloat(float fl);
	void setdouble(double db);
	void setchar(char ch);
	void setbool(bool boo);
	int getint();
	float getfloat();
	double getdouble();
	char getchar();
	bool getbool();
private:
	int i;
	float f;
	double d;
	char c;
	bool b;
};

class Serializer{
public:
	Serializer();
	~Serializer();
	uintptr_t	 serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
private:
};


#endif