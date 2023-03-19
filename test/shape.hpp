#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <cstring>

class Shape{
public:
	Shape();
	void setbackground(std::string back);
	std::string getbackground() const;
private:
	std::string background;
};

class Rectangle : public Shape{
public:
	Rectangle();
private:
};

class Circle : public Shape{
public:
	Circle();
private:
};
#endif