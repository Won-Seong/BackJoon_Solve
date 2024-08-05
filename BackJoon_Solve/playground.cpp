//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	unsigned int N;
//	cin >> N;
//
//	vector<unsigned int> vec(6);
//	for (auto& itr : vec) cin >> itr;
//	
//	unsigned int T, P;
//	cin >> T >> P;
//
//	unsigned int T_max{ 0 };
//
//	for (const auto& itr : vec) {
//
//		T_max += (itr / T);
//		T_max = itr % T != 0 ? T_max + 1 : T_max;
//
//	}
//
//	cout << T_max << '\n';
//
//	cout << N / P << ' ' << N % P << '\n';
//
//}