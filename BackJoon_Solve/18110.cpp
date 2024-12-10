//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//
//	size_t n;
//	cin >> n;
//
//	if (n == 0) {
//		cout << 0;
//		return 0;
//	}
//
//	vector< int > scores(31);
//	size_t t{ 0 };
//	for (size_t i = 0; i < n; i++) {
//		cin >> t;
//		scores[t]++;
//	}
//
//	vector< double > vec;
//	for (int i = 0; i <= 30; i++) {
//		for (size_t j = 0; j < scores[i]; j++) vec.push_back(i);
//	}
//	
//	size_t el = static_cast<size_t>(round(n * 0.15));
//	double ans{ 0 };
//	for (size_t i = el; i < n - el; i++) ans += vec[i];
//	cout << round( ans / (n - 2 * el) );
//
//}
