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
void func_template4(V<T, std::allocator<T>>& con) {
	for (const auto& c : con)
		std::cout << c << std::endl;
}