#include <vector>
#include <iostream>
#include <vector>
#include "FunctionTemplates.h"
#include <string>
#include <map>
#include <list>
#include <set>
std::vector<int> func1(std::vector<int>& a) {
	return a; // return type std::vector<int, std::allocator<int>> &
}

std::vector<int> func2(std::vector<int> a) {
	return a; // return type std::vector<int, std::allocator<int>> &
}
std::map<std::string, int> func3(std::map<std::string, int> d) {
	return d;
}
int main() {
	std::vector<int> i{ 1, 2, 3 };
	std::vector<char> j { 'A', 'B', 'C' };
	std::map<std::string, int> k{ {"A", 1} };
	std::map<std::string, double> g{ {"B", 2.0} };
	std::set<int> p{ 1,2,3 };
	std::pair<std::string, int> a{ "A", 1 };
	func3(k);
	return 0;
}