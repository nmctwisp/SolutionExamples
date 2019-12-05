#include <vector>
#include <iostream>
#include <vector>
#include "FunctionTemplates.h"
std::vector<int> func1(std::vector<int>& a) {
	return a; // return type std::vector<int, std::allocator<int>> &
}

std::vector<int> func2(std::vector<int> a) {
	return a; // return type std::vector<int, std::allocator<int>> &
}
int main() {
	std::vector<int> i{ 1, 2, 3 };
	std::vector<char> j { 'A', 'B', 'C' };
	int k = 1;
	func1(i);
	func2(i);
	func_template1(i); 
	func_template2(i, j);
	// func_template1(k); // won't compile
	func_template3(j);

	func_template4(j);



	return 0;
}