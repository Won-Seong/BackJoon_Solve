//#include <iostream>
//#include <vector>
//#include <bitset>
//#include <cmath>
//
//using namespace std;
//const unsigned long long MOD = 1000000007;
//const string MOD_BIT = bitset<32>(MOD - 2).to_string();
//const size_t SIZE = 4000000;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	vector<unsigned long long> vec(SIZE + 1);
//	vector<unsigned long long> inv(SIZE + 1);
//
//	vec[1] = 1;
//
//	for (unsigned long long i = 2; i <= SIZE; i++) vec[i] = (vec[i - 1] * i) % MOD;
//
//	unsigned long long ans = 1;
//	unsigned long long temp = 1;
//
//	for (string::const_reverse_iterator r_iter = MOD_BIT.crbegin(); r_iter != MOD_BIT.crend(); r_iter++) {
//
//		if (temp == 1) temp *= vec[SIZE];
//		else temp = (temp * temp) % MOD;
//		if (*r_iter == '1') ans = (ans * temp) % MOD;
//
//	}
//
//	inv[SIZE] = ans;
//
//	for (unsigned long long i = SIZE - 1; i > 0; i--) {
//	
//		inv[i] = (inv[i + 1] * (i + 1)) % MOD;
//
//	}
//	
//	
//	unsigned long long M, N, K;
//	cin >> M;
//
//	for (size_t i = 0; i < M; i++){
//		cin >> N >> K;
//
//		if (N == K || K == 0) cout << 1 << '\n';
//		else cout << (((vec[N] * inv[K]) % MOD) * inv[N - K]) % MOD << '\n';
//	}
//	
//	
//
//
//
//
//}