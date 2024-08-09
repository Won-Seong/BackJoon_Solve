//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//using Vector = vector< int >;
//using Matrix = vector< Vector >;
//using Pair = pair< size_t, size_t >;
//using Queue = queue< Pair >;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	Queue que;
//	Matrix mat(M);
//	for (auto& itr : mat) itr.resize(N);
//	int sum_tomato{ 0 };
//	int days{ 0 };
//	int minus_count{ 0 };
//
//	for (size_t i = 0; i < M; i++) {
//
//		for (size_t j = 0; j < N; j++) {
//
//			cin >> mat[i][j];
//			if (mat[i][j] == 1) que.push(make_pair(i, j)), sum_tomato++;
//			else if (mat[i][j] == -1) minus_count++;
//		}
//
//	}
//
//	
//
//	size_t que_size{ 0 };
//	size_t l{ 0 }, r{ 0 };
//
//	while (!que.empty()) {
//		if (sum_tomato >= N * M - minus_count) break;
//
//		que_size = que.size();
//		/*cout << endl;
//		for (const auto& itr : mat) {
//			for (const auto& itr_2 : itr) cout << itr_2 << ' ';
//			cout << endl;
//		}*/
//		
//		for (size_t i = 0; i < que_size; i++) {
//			
//
//			l = que.front().first;
//			r = que.front().second;
//
//			que.pop();
//
//			if (l > 0 && mat[l - 1][r] == 0) mat[l - 1][r] = 1, que.push(make_pair(l - 1, r)), sum_tomato++;
//			if (r > 0 && mat[l][r - 1] == 0) mat[l][r - 1] = 1, que.push(make_pair(l, r - 1)), sum_tomato++;
//			if (l < M - 1 && mat[l + 1][r] == 0) mat[l + 1][r] = 1, que.push(make_pair(l + 1, r)), sum_tomato++;
//			if (r < N - 1 && mat[l][r + 1] == 0) mat[l][r + 1] = 1, que.push(make_pair(l, r + 1)), sum_tomato++;
//
//		}
//
//		days++;
//
//	}
//
//	if (sum_tomato >= N * M - minus_count) cout << days << '\n';
//	else cout << -1 << '\n';
//
//}