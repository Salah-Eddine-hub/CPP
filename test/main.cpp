#include "shape.hpp"

int main(){
	Rectangle a;
	Circle O;
	a.setbackground("blue");
	O.setbackground("yellow");
	std::cout << O.getbackground() << std::endl;
	std::cout << a.getbackground() << std::endl;
	return 0;
}