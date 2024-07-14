//#include<iostream>
//#include <vector>
//#include <cmath>
//
//using Iter = std::vector<long long>::const_iterator;
//
//long long foo(const Iter& iter, const std::vector<  long long>& buildings) {
//
//	Iter front = iter;
//	Iter back = iter + 1;
//	long long my_height = *iter;
//
//	//std::cout << "Now:" << my_height << std::endl;
//
//	long long res{ 0 };
//	long long idx{ 0 };
//
//
//	while (front != buildings.cbegin()) {
//
//		front--;
//		idx++;
//		
//		long long temp_height = *front;
//		//std::cout << "case : " << temp_height << std::endl;
//		long double slope = static_cast<long double>(my_height - temp_height) / idx;
//		slope = abs(slope);
//		long long small_height{ 0 };
//
//		if (my_height < temp_height) {
//			small_height = my_height;
//		} else {
//			small_height = temp_height;
//		}
//		
//
//		long long x_axis{ 1 };
//		bool flag{ true };
//		
//		while (x_axis < idx) {
//			long long y = 0;
//			if (my_height < temp_height) {
//				y = *(iter - x_axis) - small_height;
//			}
//			else {
//				y = *(front + x_axis) - small_height;
//			}
//			
//			//long long y = *(front + x_axis) - small_height;
//			//std::cout << "Y : " << y << "slope : " << slope << "\txaxis : " << x_axis << "\t yhat" << slope * x_axis << std::endl;
//			if (y * idx >=  abs(my_height - temp_height) * x_axis ) {
//				flag = false;
//				break;
//			}
//			x_axis++;
//
//		}
//
//		if (flag) res++;
//
//	}
//
//	//std::cout << "Back " << std::endl;
//
//	idx = 0;
//
//	while (back != buildings.cend()) {
//
//		
//		idx++;
//		long long temp_height = *back;
//		long double slope = static_cast<long double>(my_height - temp_height) / idx;
//		slope = abs(slope);
//
//		//long long small_height = my_height < temp_height ? my_height : temp_height;
//
//		long long small_height{ 0 };
//		//std::cout << "case : " << temp_height << std::endl;
//
//		if (my_height < temp_height) {
//			small_height = my_height;
//		}
//		else {
//			small_height = temp_height;
//		}
//
//		long long x_axis{ 1 };
//		bool flag{ true };
//		while (x_axis < idx) {
//			long long y = 0;
//			if (my_height < temp_height) {
//				y = *(iter + x_axis) - small_height;
//			}
//			else {
//				y = *(back - x_axis) - small_height;
//			}
//			//int y = *(iter + x_axis) - small_height;
//			
//			//std::cout << "Y : " << y << "slope : "  << slope << "\txaxis : " << x_axis << "\t yhat" << slope * x_axis << std::endl;
//			if (y * idx >= abs(my_height - temp_height) * x_axis) {
//				flag = false;
//				break;
//			}
//			x_axis++;
//
//		}
//
//		if (flag) res++;
//		//std::cout << res << std::endl;
//		back++;
//	}
//	//std::cout << "res:" << res << std::endl;
//	return res;
//
//}
//
//int main() {
//
//	long long N{ 0 };
//	std::cin >> N;
//
//	std::vector<  long long> buildings(N, 0 );
//	for (auto& itr : buildings) std::cin >> itr;
//
//	long long num{ N };
//
//	Iter iter{ buildings.cbegin() };
//	long long max{ 0 };
//
//	while (iter != buildings.cend()) {
//		long long temp = foo(iter, buildings);
//		//std::cout << foo(iter, buildings) << std::endl;
//		max = max < temp ? temp : max;
//		iter++;
//
//	}
//
//	
//
//	std::cout << max;
//
//}