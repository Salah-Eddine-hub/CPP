#include "test.hpp"

Point::Point(int x, int y) : x(x), y(y) {
}
std::ostream &operator<<(std::ostream &stream, const Point &point) {
	stream << point.get_x();
	stream << point.get_y();
	return stream;
}
bool Point::operator==(const Point &other) const {
	return ((x == other.x) && (y == other.y));
}

Point Point::operator+(const Point &other) const {
	int point1 = x + other.x;
	int point2 = y + other.y;
	return Point(point1, point2);
}
// Point Point::operator+(const int other) const {
// 	return (Point(x + other) && Point(y + other));
// }
void Point::set_x(int x){
	this->x = x;
}

void Point::set_y(int y){
	this->y = y;
}

int Point::get_x() const{
	return this->x;
}

int Point::get_y() const{
	return this->y;
}