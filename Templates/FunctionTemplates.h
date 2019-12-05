#pragma once

template <typename T>
void func_template1(T& con) {
	for (const auto& c : con)
		std::cout << c << std::endl;
}

template <typename T1, typename T2>
void func_template2(T1 a, T2 b) {
	for (const auto& i: a){
		for (const auto& j : b)
			std::cout << i << " " << j << std::endl;
	}
}

template <template<typename, typename> typename V, typename T, typename Alloc>
void func_template3(V<T, Alloc>& con) {
	for (const auto& c : con)
		std::cout << c << std::endl;
}

template <template<typename, typename> typename V, typename T>
void func_template(V<T, std::allocator<T>>& vec) {
	for (const auto& elem : vec)
		std::cout << elem << std::endl;
}

template <template<typename, typename, typename, typename> typename M, typename T1, typename T2>
void func_template(M<T1, T2, std::less<T1>, std::allocator<std::pair<const T1, T2>>> & dict) {
	for (const auto& pair : dict)
		std::cout << pair.first << " " << pair.second << std::endl;
}