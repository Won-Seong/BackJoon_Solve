//#include <iostream>
//#include <vector>
//
//int main() {
//
//	int N, K;
//	std::cin >> N >> K; 
//	std::vector<int> vec(N);
//	
//	for (auto& itr : vec) std::cin >> itr;
//	int ans{ -100000000 };
//	int temp{ int() };
//
//	
//	for (int i = 0; i < K; i++) temp += vec[i];
//	if (temp > ans) ans = temp;
//
//	for (int i = K; i < N; i++) {
//
//		temp -= vec[i - K];
//		temp += vec[i];
//		if (temp > ans) ans = temp;
//
//	}
//	
//	std::cout << ans;
//
//
//}