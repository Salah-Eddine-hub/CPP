#include "test.hpp"

Point::Point(int x, int y) : x(x), y(y) {
}

bool Point::operator==(const Point &other) const {
	return ((x == other.x) && (y == other.y));
}

void Point::set_x(int x){
	this->x = x;
}

void Point::set_y(int y){
	this->y = y;
}

int Point::get_x(){
	return this->x;
}

int Point::get_y(){
	return this->y;
}