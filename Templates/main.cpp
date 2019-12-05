#include <vector>
#include <iostream>
#include <vector>
#include "FunctionTemplates.h"

int main() {
	std::vector<int> i{ 1, 2, 3 };
	std::vector<char> j { 'A', 'B', 'C' };
	int k = 1;
	func_template1(i); 
	// func_template1(k); // won't compile
	func_template3(j);



	return 0;
}