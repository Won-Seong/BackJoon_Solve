//#include <iostream>
//#include <vector>
//
//using namespace std;
//using Vector = vector< int >;
//using Matrix = vector< Vector >;
//Matrix board;
//size_t N;
//int ans{ 0 };
//
//static void print() {
//
//	for (const auto& itr : board) {
//		for (const auto& itr_2 : itr) cout << itr_2 << ' ';
//		cout << endl;
//	}
//	cout << endl;
//}
//
//static int max() {
//
//	int ans{ 0 };
//	for (const auto& itr : board) {
//		for (const auto& itr_2 : itr) ans = ans > itr_2 ? ans : itr_2;
//	}
//
//	return ans;
//}
//
//static void left() {
//
//	for (size_t r = 0; r < N; r++) {
//
//		Vector flags(N, 0);
//
//		for (size_t c = 1; c < N; c++) {
//
//			if (board[r][c] == 0) continue; // No number
//			size_t t{ c - 1 };
//			while (t > 0 && board[r][t] == 0) t--;
//			if (board[r][c] == board[r][t] && flags[t] == 0) {
//				board[r][c] = 0;
//				board[r][t] = board[r][t] * 2;
//				ans = ans > board[r][t] ? ans : board[r][t];
//				flags[t] = 1;
//			}
//			else if (t == 0 && board[r][t] == 0) {
//				board[r][t] = board[r][c];
//				board[r][c] = 0;
//			}
//			else {
//				board[r][t + 1] = board[r][c];
//				if (t + 1 != c) board[r][c] = 0;
//			}
//
//		}
//
//	}
//
//}
//
//static void right() {
//
//	for (size_t r = 0; r < N; r++) {
//
//		Vector flags(N, 0);
//
//		for (int c = N - 2; c >= 0; c--) {
//
//			if (board[r][c] == 0) continue; // No number
//			int t{ c + 1 };
//			while (t < N - 1 && board[r][t] == 0) t++;
//			if (board[r][c] == board[r][t] && flags[t] == 0) {
//				board[r][c] = 0;
//				board[r][t] = board[r][t] * 2;
//				ans = ans > board[r][t] ? ans : board[r][t];
//				flags[t] = 1;
//			}
//			else if (t == N - 1 && board[r][t] == 0) {
//				board[r][t] = board[r][c];
//				board[r][c] = 0;
//			}
//			else {
//				board[r][t - 1] = board[r][c];
//				if (t - 1 != c) board[r][c] = 0;
//			}
//
//		}
//
//	}
//
//}
//
//static void down() {
//
//	for (size_t c = 0; c < N; c++) {
//
//		Vector flags(N, 0);
//
//		for (int r = N - 2; r >= 0; r--) {
//
//			if (board[r][c] == 0) continue; // No number
//			int t{ r + 1 };
//			while (t < N - 1 && board[t][c] == 0) t++;
//			if (board[r][c] == board[t][c] && flags[t] == 0) {
//				board[r][c] = 0;
//				board[t][c] = board[t][c] * 2;
//				ans = ans > board[t][c] ? ans : board[t][c];
//				flags[t] = 1;
//			}
//			else if (t == N - 1 && board[t][c] == 0) {
//				board[t][c] = board[r][c];
//				board[r][c] = 0;
//			}
//			else {
//				board[t - 1][c] = board[r][c];
//				if (t - 1 != r) board[r][c] = 0;
//			}
//
//		}
//
//	}
//
//}
//
//static void up() {
//
//	for (size_t c = 0; c < N; c++) {
//
//		Vector flags(N, 0);
//
//		for (size_t r = 1; r < N; r++) {
//
//			if (board[r][c] == 0) continue; // No number
//			size_t t{ r - 1 };
//			while (t > 0 && board[t][c] == 0) t--;
//			if (board[r][c] == board[t][c] && flags[t] == 0) {
//				board[r][c] = 0;
//				board[t][c] = board[t][c] * 2;
//				ans = ans > board[t][c] ? ans : board[t][c];
//				flags[t] = 1;
//			}
//			else if (t == 0 && board[t][c] == 0) {
//				board[t][c] = board[r][c];
//				board[r][c] = 0;
//			}
//			else {
//				board[t + 1][c] = board[r][c];
//				if (t + 1 != r) board[r][c] = 0;
//			}
//
//		}
//
//	}
//
//}
//
//void foo(size_t turn) {
//
//	if (turn == 0) return;
//	//print();
//	Matrix temp_board = board;
//	up();
//	foo(turn - 1);
//	board = temp_board;
//	down();
//	foo(turn - 1);
//	board = temp_board;
//	left();
//	foo(turn - 1);
//	board = temp_board;
//	right();
//	foo(turn - 1);
//	board = temp_board;
//
//	return;
//}
//
//int main() {
//
//	cin >> N;
//
//	board.resize(N);
//	for (auto& itr : board) itr.resize(N);
//	for (auto& itr : board) {
//		for (auto& itr_2 : itr) cin >> itr_2, ans = ans > itr_2 ? ans : itr_2;
//	}
//
//	foo(5);
//	cout << ans;
//
//}