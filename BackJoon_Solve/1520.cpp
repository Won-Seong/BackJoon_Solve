//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//using Vector = vector< int >;
//using Matrix = vector< Vector >;
//using Pair = pair<size_t, size_t>;
//using Tuple = tuple<int, size_t, size_t>;
//
//int main() {
//
//	size_t N, M;
//	cin >> N >> M;
//
//	Matrix map(N);
//	for (auto& itr : map) itr.resize(M);
//	for (auto& itr : map) {
//		for (auto& itr2 : itr) cin >> itr2;
//	}
//
//	Matrix dp(N);
//	for (auto& itr : dp) itr.resize(M, 0);
//	dp[0][0] = 1;
//	//queue< Pair > que;
//	priority_queue< Tuple > que;
//	que.push(make_tuple(map[0][0], 0, 0));
//
//	size_t r, c;
//
//	while (!que.empty()) {
//
//
//		r = get<1>(que.top());
//		c = get<2>(que.top());
//		que.pop();
//		if (map[r][c] == 1 << 18) continue;
//
//		/*cout << r << ' ' << c << endl;
//		for (const auto& itr : dp) {
//			for (const auto& itr_2 : itr) cout << itr_2 << ' ';
//			cout << endl;
//		}*/
//		
//
//		if (r > 0 && map[r][c] > map[r - 1][c]) dp[r - 1][c] += dp[r][c], que.push(make_tuple(map[r - 1][c], r - 1, c));
//		if (r < N - 1 && map[r][c] > map[r + 1][c]) dp[r + 1][c] += dp[r][c], que.push(make_tuple(map[r + 1][c], r + 1, c));
//		if (c > 0 && map[r][c] > map[r][c - 1]) dp[r][c - 1] += dp[r][c], que.push(make_tuple(map[r][c - 1], r, c - 1));
//		if (c < M - 1 && map[r][c] > map[r][c + 1]) dp[r ][c + 1] += dp[r][c], que.push(make_tuple(map[r][c + 1], r, c + 1));;
//
//		map[r][c] = 1 << 18;
//
//	}
//
//	/*for (const auto& itr : dp) {
//		for (const auto& itr_2 : itr) cout << itr_2 << ' ';
//		cout << endl;
//	}*/
//	cout << dp[N - 1][M - 1];
//
//}
