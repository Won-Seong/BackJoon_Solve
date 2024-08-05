//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <queue>
//
//using namespace std;
//using Vector = vector<int>;
//using Matrix = vector< Vector >;
//using Tuple = tuple<int, size_t, size_t>;
//
////bool CanIGo(const Matrix& vis, size_t r, size_t c) {
////
////	if (r < 0 || c < 0 || r > vis.size() || c > vis[0].size()) return false;
////	else if (vis[r][c] == 1) return false;
////	else return true;
////
////}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t n, m;
//	cin >> n >> m;
//
//	Matrix mat(n);
//	for (auto& itr : mat) itr.resize(m);
//
//	size_t r{ 0 }, c{ 0 };
//
//	for (size_t i = 0; i < n; i++) {
//
//		for (size_t j = 0; j < m; j++) {
//
//			cin >> mat[i][j];
//			if (mat[i][j] == 2) r = i, c = j;
//		}
//
//	}
//
//	//Matrix vis(n);
//	//for (auto& itr : vis) itr.resize(m);
//
//	queue< Tuple > que;
//	que.push(make_tuple(0, r, c));
//
//	int score{ 0 };
//	size_t a, b;
//
//	while (!que.empty()) {
//
//		score = get<0>(que.front());
//		a = get<1>(que.front());
//		b = get<2>(que.front());
//
//		que.pop();
//
//		if (a > 0 && mat[a - 1][b] == 1) mat[a - 1][b] = score + 1, que.push(make_tuple(score + 1, a - 1, b));
//		if (b > 0 && mat[a ][b - 1] == 1) mat[a ][b - 1] = score + 1, que.push(make_tuple(score + 1, a , b - 1));
//		if (a < n - 1 && mat[a + 1][b] == 1) mat[a + 1][b] = score + 1, que.push(make_tuple(score + 1, a + 1, b));
//		if (b < m - 1 && mat[a][b + 1] == 1) mat[a ][b + 1] = score + 1, que.push(make_tuple(score + 1, a , b + 1));
//
//	}
//
//	for (auto& itr : mat) {
//		for (auto& itr_2 : itr) if (itr_2 == 1) itr_2 = -1;
//	}
//
//	mat[r][c] = 0;
//	if (r > 0 && mat[r - 1][c] > 0) mat[r - 1][c] = 1;
//	if (c > 0 && mat[r ][c - 1] > 0) mat[r][c - 1] = 1;
//	if (r < n - 1 && mat[r + 1][c] > 0) mat[r + 1][c] = 1;
//	if (c < m - 1 && mat[r ][c + 1] > 0) mat[r][c + 1] = 1;
//
//	//cout << '\n';
//	for (const auto& itr : mat) {
//
//		for (const auto& itr_2 : itr) cout << itr_2 << ' ';
//		cout << '\n';
//
//	}
//
//}