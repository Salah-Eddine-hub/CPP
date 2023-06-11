#include "shape.hpp"

Shape::Shape() {
	std::cout << "Shape constructor!" << std::endl;
}

Rectangle::Rectangle() {
	std::cout << "Rectangle constructor!" << std::endl;
}

Circle::Circle() {
	std::cout << "Circle constructor!" << std::endl;
}
void Shape::setbackground(std::string back) {
	this->background = back;
}

std::string Shape::getbackground() const {
	return (this->background);
}