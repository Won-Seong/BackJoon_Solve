//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	size_t N;
//	cin >> N;
//
//	vector< unsigned int > ws(N);
//	for (auto& itr : ws) cin >> itr;
//
//	vector< unsigned int > flags(40000 + 1);
//	vector< unsigned int > dp;
//
//	for (const auto& itr : ws) {
//
//		size_t len = dp.size();
//		for (size_t i = 0; i < len; i++){
//			if (flags[dp[i] + itr] == 0) dp.push_back(dp[i] + itr), flags[dp[i] + itr] = 1;
//			size_t t = itr > dp[i] ? itr - dp[i] : dp[i] - itr;
//			if (flags[t] == 0) dp.push_back(t), flags[t] = 1;
//
//		}
//
//		if (flags[itr] == 0) flags[itr] = 1, dp.push_back(itr);
//
//	}
//
//	size_t M;
//	cin >> M;
//
//	for (size_t i = 0; i < M; i++){
//		cin >> N;
//		if (flags[N] == 1) cout << 'Y' << ' ';
//		else cout << 'N' << ' ';
//
//	}
//
//}