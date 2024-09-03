//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    size_t N;
//    cin >> N;
//
//    vector<string> vec(N);
//    for (auto& itr : vec) cin >> itr;
//
//    unsigned long long K;
//    cin >> K;
//
//    vector<vector<unsigned long long>> dp(1 << N, vector<unsigned long long>(K, 0));
//
//    vector<unsigned long long> mod_values(N);
//    for (size_t l = 0; l < N; l++) {
//        unsigned long long value = 0;
//        for (char c : vec[l]) {
//            value = (value * 10 + (c - '0')) % K;
//        }
//        mod_values[l] = value;
//    }
//
//    vector<unsigned long long> power_of_ten(51, 1);
//    for (int i = 1; i < 51; i++) {
//        power_of_ten[i] = (power_of_ten[i - 1] * 10) % K;
//    }
//
//   
//
//    dp[0][0] = 1;
//
//    for (size_t i = 0; i < (1 << N); i++) {
//        for (size_t k = 0; k < K; k++) {
//            if (dp[i][k] > 0) {
//                for (size_t l = 0; l < N; l++) {
//                    if ((i & (1 << l)) == 0) {
//                        unsigned long long new_bit = i | (1 << l);
//                        unsigned long long new_mod = (k * power_of_ten[vec[l].size()] + mod_values[l]) % K;
//                        dp[new_bit][new_mod] += dp[i][k];
//                    }
//                }
//            }
//        }
//    }
//    
//    unsigned long long ans{ 0 };
//    for (size_t i = 0; i < K; i++) ans += dp[(1 << N) - 1][i];
//    unsigned long long a = dp[(1 << N) - 1][0];
//    unsigned long long qqq = ans;
//
//    if (a == ans) cout << 1 << '/' << 1 << '\n';
//    else if(a == 0 ) cout << 0 << '/' << 1 << '\n';
//    else {
//
//        // Compute GCD using the Euclidean algorithm
//        unsigned long long gcd = qqq;
//        while (a != 0) {
//            unsigned long long t = gcd % a;
//            gcd = a;
//            a = t;
//        }
//
//        // Simplify the numerator and denominator
//        unsigned long long numerator = dp[(1 << N) - 1][0] / gcd;
//        unsigned long long denominator = ans / gcd;
//
//        cout << numerator << '/' << denominator << '\n';
//
//    }
//
//}
