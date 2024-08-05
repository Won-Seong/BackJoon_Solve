//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//const unsigned long long MOD = 1000000007;
//
//int main() {
//
//	iostream::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t M;
//	cin >> M;
//
//	for (size_t i = 0; i < M; i++){
//
//		unsigned long long N, K;
//		cin >> N >> K;
//		
//		// Mother
//
//		if (K == 0) {
//			cout << 1 << '\n';
//			continue;
//		}
//
//		if (K > N / 2) K = N - K;
//
//		unsigned long long kid{ 1 }, mother{ 1 };
//
//		for (unsigned long long i = K; i > 0; ) {
//
//			if (i == 1) { kid = (kid * (N - (K - i))) % MOD; break; }
//
//			mother = (mother * (( i * (i - 1)) % MOD)) % MOD;
//			kid = (kid * (    (N - (K - i)) * (N - (K - (i - 1))) % MOD)) % MOD;
//			//cout << mother << '\n';
//			i -= 2;
//
//		}
//
//		//for (unsigned long long i = N; i > N - K; ){
//		//	
//		//	if (i - 1 == N - K) kid = (kid * i) % MOD;
//		//	else kid = (kid * ((i * (i - 1)) % MOD)) % MOD;
//		//	//cout << kid << '\n';
//
//		//	if (i == 1) break;
//		//	else i -= 2;
//
//		//}
//
//		//cout << kid << ' ' << mother << '\n';
//		cout << kid / mother << '\n';
//
//	}
//
//	
//
//}