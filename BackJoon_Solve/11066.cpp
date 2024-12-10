//#include <iostream>
//#include <vector>
//
//using namespace std;
//using Vector = vector<unsigned long>;
//using Matrix = vector< Vector >;
//
//int foo(Matrix& dp, size_t l, size_t r, const Vector& vec) {
//
//	if (l == r) { return 0; }
//	else if (r - l == 1) { return dp[l][r]; }
//	else if (dp[l][r] < (1 << 30) ) return dp[l][r];
//	
//	unsigned long a, b;
//
//	for (size_t i = l; i < r; i++) {
//		
//		a = foo(dp, l, i, vec);
//		b = foo(dp, i + 1, r, vec);
//
//		if (l == 0) {
//			dp[l][r] = dp[l][r] < (vec[i]  ) + a + (vec[r] - vec[i]) + b ?
//				dp[l][r] : (vec[i] ) + a + (vec[r] - vec[i]) + b;
//		}
//		else dp[l][r] = dp[l][r] < (vec[i] - vec[l - 1]) + a + (vec[r] - vec[i]) + b ?
//			dp[l][r] : (vec[i] - vec[l - 1]) + a + (vec[r] - vec[i]) + b;
//		
//	}
//	return dp[l][r];
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t N;
//	cin >> N;
//
//	for (size_t i = 0; i < N; i++){
//
//		size_t K;
//		cin >> K;
//
//		Vector vec(K);
//		for (auto& itr : vec) cin >> itr;
//
//		Vector sum_vec(K);
//		sum_vec[0] = vec[0];
//		for (size_t i = 1; i < K; i++) sum_vec[i] = sum_vec[i - 1] + vec[i];
//
//		Matrix dp(K);
//		for (auto& itr : dp) itr.resize(K, (1 << 30));
//		for (size_t i = 0; i < K; i++) dp[i][i] = vec[i];
//		for (size_t i = 0; i < K - 1; i++) dp[i][i + 1] = vec[i + 1] + vec[i];
//		
//
//		foo(dp, 0, K - 1, sum_vec);
//		cout << dp[0][K - 1] << '\n';
//		/*for (const auto& itr : dp) {
//			for (const auto& itr2 : itr) cout << itr2 << ' ';
//			cout << endl;
//		}*/
//		
//	}
//
//	
//
//}