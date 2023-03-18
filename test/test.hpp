#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <ostream>
// we have another time is strong ordering i
// we writed like that 
// <=> in #include <compare>
class Point{
public:
	Point(int x, int y);

	bool operator==(const Point &other) const;
	Point operator+(const Point &other) const;
	// Point operator+(const int other) const;

	void set_x(int x);
	void set_y(int y);
	int get_x() const;
	int get_y() const;
private:
	int x;
	int y;
};
std::ostream &operator<<(std::ostream& stream, const Point &other);
// ostream operator<<()
#endif
