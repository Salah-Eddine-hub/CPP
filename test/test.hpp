#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
// we have another time is strong ordering i
// we wirted like that 
// <=> in #include <compare>
class Point{
public:
	Point(int x, int y);
	int get_x();
	int get_y();
	void set_x(int x);
	void set_y(int y);
	bool operator==(const Point &other) const;
private:
	int x;
	int y;
};

#endif
