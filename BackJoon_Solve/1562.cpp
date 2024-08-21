//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//unsigned long long cube[10][100 + 1][(1 << 10)];
//unsigned long long MOD = 1000000000;
//unsigned long long SIZE = 100;
//
//int main() {
//
//	unsigned long long N;
//	cin >> N;
//
//	for (unsigned long long d = 1; d < 10; d++) cube[d][1][1 << d] = 1;
//	
//	for (unsigned long long l = 1; l < N; l++) {
//
//		for (unsigned long long d = 0; d < 10; d++) {
//
//			for (unsigned long long m = 0; m < (1 << 10); m++) {
//
//				if (cube[d][l][m] > 0) {
//					//cout << d << ' ' << l << ' ' << m << endl;
//					if (d > 0) cube[d - 1][l + 1][m | (1 << (d - 1))] = (cube[d - 1][l + 1][m | (1 << (d - 1))] + cube[d][l][m]) % MOD;
//					if (d < 9) cube[d + 1][l + 1][m | (1 << (d + 1))] = (cube[d + 1][l + 1][m | (1 << (d + 1))] + cube[d][l][m]) % MOD;
//
//				}
//				/*if (j == 0) cube[i][j][k | (1 << j)] += cube[i - 1][j + 1][k];
//				else if (j == 9) cube[i][j][k | (1 << j)] += cube[i - 1][j - 1][k];
//				else cube[i][j][k | (1 << j)] += cube[i - 1][j - 1][k] + cube[i - 1][j + 1][k];*/
//
//			}
//
//		}
//
//	}
//
//	
//	//for (int i = 1; i <= 9; i++) ans += foo(N, i, 0) % MOD;
//	unsigned long long ans{ 0 };
//	//for (int i = 1; i <= 40; i++) {
//	//	for (int d = 0; d < 10; d++) ans += cube[d][i][(1<< 10) - 1] ;
//	//}
//	for (int d = 0; d < 10; d++) ans = (ans + cube[d][N][(1 << 10) - 1]) % MOD;
//	cout << ans ;
//	//for (int i = 0; i <= 9; i++) cout << matrix[N][i] << '\n';
//	
//	
//}