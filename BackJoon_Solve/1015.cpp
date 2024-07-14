//#include <iostream>
//#include <vector>
//
//int main() {
//
//	int N{ int() };
//	std::cin >> N;
//	std::vector<int> A(N);
//
//	for (int i = 0; i < N; i++) {
//
//		std::cin >> A[i];
//		A[i] -= 1;
//
//	}
//
//	
//	//std::vector<int> vec(999, -1);
//	std::vector< std::vector<int> > vec(1000, std::vector<int>());
//	
//	for (int i = 0; i < N; i++) {
//		
//		vec[A[i]].push_back(i);
//	}
//
//	
//	std::vector<int> temp(1000, -1);
//	int idx{ 0 };
//
//	for (int i = 0; i < 1000; i++) {
//
//		if (vec[i].empty()) continue;
//		//std::cout << i << " : ";
//		for (const auto& itr : vec[i]) { 
//			temp[itr] = idx++;
//			//std::cout << itr << ' '; 
//		}
//		//std::cout << std::endl;
//
//	}
//
//
//	//std::cout << std::endl;
//
//	for (const auto& itr : temp) { 
//		if (itr == -1) continue;
//		std::cout << itr << ' ';
//	}
//
//}
//
//// B[1] = 2 
//// B[2] = 3
//// B[0] = 1
