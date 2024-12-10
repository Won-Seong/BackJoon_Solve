//#include <iostream>
//#include <vector>
//
//using namespace std;
//using Vector = vector< int >;
//using Matrix = vector< Vector >;
//
//Matrix mat;
//size_t N, M;
//
//int square() {
//
//	int ans{ -1 };
//	int temp{ 0 };
//
//	for (size_t r = 0; r < N - 1; r++){
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r][c] + mat[r + 1][c] + mat[r][c + 1] + mat[r + 1][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	return ans;
//
//}
//
//int line() {
//
//	int ans{ -1 };
//	int temp{ 0 };
//
//	for (size_t r = 0; r < N; r++) {
//
//		for (size_t c = 0; c < M - 3; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r][c + 2] + mat[r][c + 3];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 3; r++) {
//
//		for (size_t c = 0; c < M; c++) {
//
//			temp = mat[r][c] + mat[r + 1][c] + mat[r + 2][c] + mat[r + 3][c];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	return ans;
//
//}
//
//int L() {
//
//	int ans{ -1 };
//	int temp{ 0 };
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r][c] + mat[r + 1][c] + mat[r + 2][c] + mat[r + 2][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r][c + 2] + mat[r + 1][c];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 2][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 1][c + 2] + mat[r][c + 2];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r + 2][c] + mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 2][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r][c] + mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 1][c + 2];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r + 1][c] + mat[r + 2][c];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r][c + 2] + mat[r + 1][c + 2];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	
//
//	return ans;
//
//}
//
//int H() {
//
//	int ans{ -1 };
//	int temp{ 0 };
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r][c] + mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 2][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r + 1][c] + mat[r + 1][c + 1] + mat[r][c + 1] + mat[r][c + 2];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r + 1][c] + mat[r + 2][c] + mat[r][c + 1] + mat[r + 1][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 1][c + 2];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	return ans;
//
//}
//
//int O() {
//
//	int ans{ -1 };
//	int temp{ 0 };
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r][c] + mat[r + 1][c] + mat[r + 2][c] + mat[r + 1][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r][c] + mat[r][c + 1] + mat[r][c + 2] + mat[r + 1][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 2; r++) {
//
//		for (size_t c = 0; c < M - 1; c++) {
//
//			temp = mat[r + 1][c] + mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 2][c + 1];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//	for (size_t r = 0; r < N - 1; r++) {
//
//		for (size_t c = 0; c < M - 2; c++) {
//
//			temp = mat[r][c + 1] + mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 1][c + 2];
//			ans = ans > temp ? ans : temp;
//
//		}
//
//	}
//
//
//
//	return ans;
//
//}
//
//int main() {
//
//	cin >> N >> M;
//	mat.resize(N);
//	for (auto& itr : mat) itr.resize(M);
//
//	for (auto& itr : mat) {
//		for (auto& itr2 : itr) cin >> itr2;
//	}
//
//	int ans{ -1 };
//	int temp{ -1 };
//
//	temp = square();
//	ans = ans > temp ? ans : temp;
//
//	temp = line();
//	ans = ans > temp ? ans : temp;
//
//	temp = L();
//	ans = ans > temp ? ans : temp;
//
//	temp = H();
//	ans = ans > temp ? ans : temp;
//
//	temp = O();
//	ans = ans > temp ? ans : temp;
//	
//	cout << ans << '\n';
//
//	/*cout << square() << '\n';
//	cout << line() << '\n';
//	cout << L() << '\n';
//	cout << H() << '\n';
//	cout << O() << '\n';*/
//
//}