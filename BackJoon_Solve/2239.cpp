//#include <iostream>
//
//using namespace std;
//int n = 9;
//int a[9][9];
//bool r[9][10];
//bool c[9][10];
//bool sq[9][10];
//
//static bool foo(int t) {
//
//	if (t >= 81) return true;
//
//	int x = t / 9;
//	int y = t % 9;
//
//	if (a[x][y] != 0) return foo(t + 1);
//	else {
//
//		for (int i = 1; i <= 9; i++) {
//
//			if (r[x][i] == false && c[y][i] == false && sq[(x / 3) * 3 + (y / 3)][i] == false) {
//				
//				r[x][i] = true, c[y][i] = true, sq[(x / 3) * 3 + (y / 3)][i] = true;
//				a[x][y] = i;
//				if (foo(t + 1)) return true;
//				else {
//
//					r[x][i] = false, c[y][i] = false, sq[(x / 3) * 3 + (y / 3)][i] = false;
//					a[x][y] = 0;
//				}
//
//			}
//
//		}
//
//	}
//
//	return false;
//
//}
//
//int main() {
//
//	string str;
//	for (int i = 0; i < 9; i++) {
//		cin >> str;
//		for (int j = 0; j < 9; j++) {
//			a[i][j] = str[j] - '0';
//			if (a[i][j] != 0) {
//
//				r[i][ a[i][j] ] = true;
//				c[j][ a[i][j] ] = true;
//				sq[  (i / 3) * 3 + (j / 3)][a[i][j]] = true;
//
//			}
//		}
//
//	}
//
//	foo(0);
//
//	for (size_t i = 0; i < 9; i++) {
//		for (size_t j = 0; j < 9; j++) cout << a[i][j];
//		cout << endl;
//	}
//
//}