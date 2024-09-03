//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//
//	size_t N, M;
//	cin >> N >> M;
//
//	vector< int > vec(N + 1);
//	for (int i = 0; i <= N; i++) vec[i] = i;
//
//	size_t i, j;
//
//	for (size_t k = 0; k < M; k++){
//
//		cin >> i >> j;
//		while (i < j) {
//			swap(vec[i], vec[j]);
//			i++, j--;
//		}
//
//	}
//
//	for (size_t i = 1; i <= N; i++) cout << vec[i] << ' ';
//
//}