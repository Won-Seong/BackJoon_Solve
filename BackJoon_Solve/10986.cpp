//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	size_t N, M;
//	cin >> N >> M;
//
//	vector<unsigned long long> vec(N);
//	for (auto& itr : vec) cin >> itr, itr %= M;
//
//	vector<unsigned long long> sum_vec = vec;
//	for (size_t i = 1; i < sum_vec.size(); i++){
//		sum_vec[i] = (sum_vec[i - 1] + sum_vec[i]) % M;
//	}
//
//	vector<unsigned long long> dp(1000 + 1);
//	unsigned long long ans{ 0 };
//
//	for (const auto& itr : sum_vec) {
//
//		ans += dp[itr];
//		if (itr == 0) ans++;
//		dp[itr]++;
//
//	}
//
//	//for (const auto& itr : sum_vec) cout << itr << ' ';
//	cout << ans << '\n';
//}