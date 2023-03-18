#include "test.hpp"

int main(){
	Point first{10, 20};
	Point second{10, 21};
	Point third = first + second;
	std::cout << (first == second) << std::endl;
	std::cout << third;
	return 0;
}