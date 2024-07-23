//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//using Vector = vector<int>;
//using Matrix = vector< Vector >;
//
//int main() {
//
//	long long N;
//	cin >> N;
//	/*Matrix mat(N);
//	for (auto& itr : mat) itr.resize(N);
//
//	for (int i = 0; i < N; i++) {
//
//		for (int j = 0; j < N; j++) mat[i][j] = (i + 1) * (j + 1);
//
//	}
//
//	Vector vec;
//	for (const auto& itr : mat) {
//
//		for (const auto& itr_2 : itr) vec.push_back(itr_2);
//
//	}
//	for (const auto& itr : vec) cout << itr << ' ';
//	cout << endl;
//
//	sort(vec.begin(), vec.end());
//
//	for (const auto& itr : vec) cout << itr << ' ';
//	cout << endl;*/
//
//	long long k{ int() };
//	cin >> k;
//	long long l_o = 0, r_o = N * N;
//	long long ans = (l_o + r_o) / 2;
//
//	if (k == N * N) { cout << N * N; return 0; }
//
//	while (r_o - l_o > 0) {
//		
//		long long temp = 0;
//		ans = (l_o + r_o) / 2;
//		//cout << "NEXT_ANS : " << ans << endl;
//		
//
//		for (int i = 1; i <= N; i++) {
//
//			long long l = 1, r = N + 1;
//			long long m{ (l + r) / 2 };
//
//			while (r - l > 1) {
//
//				m = (r + l) / 2;
//				if (m * i == ans) {
//					l = m;
//					break;
//				}
//				if (m * i < ans) l = m;
//				else r = m;
//
//			}
//			
//			if (ans == l * i) temp += (l - 1);
//			else if (l * i < ans) temp += l;
//			//cout << "L" << l << endl;
//		}
//		
//
//		//cout << "ANS_K : " << temp << endl;
//
//
//		//if (temp == k) break;
//		if (temp < k) l_o = ans;
//		else r_o = ans;
//		if (ans == (l_o + r_o) / 2) break;
//
//	}
//	
//	
//	cout << l_o;
//
//	
//
//
//}