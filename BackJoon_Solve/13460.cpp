//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//using Matrix = vector<string>;
//using Pair = pair<size_t, size_t>;
////using DP = vector< vector< vector< vector< int > > > >;
//
//Matrix mat;
//int dp[11][11][11][11];
//Pair hole;
//queue< tuple<size_t, size_t, size_t, size_t> > que;
//
//
//void left(Pair red, Pair blue, int t) {
//
//	bool flag{ red.first <= blue.first };
//	
//	while (mat[red.first - 1][red.second] == '.') red.first--;
//	while (mat[blue.first - 1][blue.second] == '.') blue.first--;
//
//	while (mat[red.first - 1][red.second] == 'O') red.first--;
//	while (mat[blue.first - 1][blue.second] == 'O') blue.first--;
//	
//	if (blue == red && red != hole) {
//		if (flag) blue.first++;
//		else red.first++;
//	}
//	
//	if (dp[red.first][red.second][blue.first][blue.second] > t) {
//		dp[red.first][red.second][blue.first][blue.second] = t;
//		if(red != hole && blue != hole) que.push(make_tuple(red.first, red.second, blue.first, blue.second));
//	}
//	
//}
//
//void right(Pair red, Pair blue, int t) {
//
//	bool flag{ red.first >= blue.first };
//
//	while (mat[red.first + 1][red.second] == '.') red.first++;
//	while (mat[blue.first + 1][blue.second] == '.') blue.first++;
//
//	if (mat[red.first + 1][red.second] == 'O') red.first++;
//	if (mat[blue.first + 1][blue.second] == 'O') blue.first++;
//
//	if (blue == red && red != hole) {
//		if (flag) blue.first--;
//		else red.first--;
//	}
//
//	if (dp[red.first][red.second][blue.first][blue.second] > t) {
//		dp[red.first][red.second][blue.first][blue.second] = t;
//		if (red != hole && blue != hole) que.push(make_tuple(red.first, red.second, blue.first, blue.second));
//	}
//
//}
//
//void up(Pair red, Pair blue, int t) {
//
//	bool flag{ red.second >= blue.second };
//
//	while (mat[red.first][red.second + 1] == '.') red.second++;
//	while (mat[blue.first][blue.second + 1] == '.') blue.second++;
//
//	if (mat[red.first][red.second + 1] == 'O') red.second++;
//	if (mat[blue.first][blue.second + 1] == 'O') blue.second++;
//
//	if (blue == red && red != hole) {
//		if (flag) blue.second--;
//		else red.second--;
//	}
//
//	if (dp[red.first][red.second][blue.first][blue.second] > t) {
//		dp[red.first][red.second][blue.first][blue.second] = t;
//		if (red != hole && blue != hole) que.push(make_tuple(red.first, red.second, blue.first, blue.second));
//	}
//
//}
//
//void down(Pair red, Pair blue, int t) {
//
//	bool flag{ red.second <= blue.second };
//
//	while (mat[red.first][red.second - 1] == '.') red.second--;
//	while (mat[blue.first][blue.second - 1] == '.') blue.second--;
//
//	if (mat[red.first][red.second - 1] == 'O') red.second--;
//	if (mat[blue.first][blue.second - 1] == 'O') blue.second--;
//
//	if (blue == red && red != hole) {
//		if (flag) blue.second++;
//		else red.second++;
//	}
//
//	if (dp[red.first][red.second][blue.first][blue.second] > t) {
//		dp[red.first][red.second][blue.first][blue.second] = t;
//		if (red != hole && blue != hole) que.push(make_tuple(red.first, red.second, blue.first, blue.second));
//	}
//
//}
//
//int main() {
//
//	size_t N, M;
//	cin >> N >> M;
//
//	mat.resize(N);
//	for (auto& itr : mat) cin >> itr;
//
//	Pair red;
//	Pair blue;
//
//	for (size_t i = 0; i < N; i++) {
//		
//		for (size_t j = 0; j < M; j++) {
//			if (mat[i][j] == 'O') hole = make_pair(i, j);
//			else if (mat[i][j] == 'R') red = make_pair(i, j), mat[i][j] = '.';
//			else if (mat[i][j] == 'B') blue = make_pair(i, j), mat[i][j] = '.';
//		}
//
//	}
//
//	que.push(make_tuple(red.first, red.second, blue.first, blue.second));
//	
//	for (int i = -10; i <= -1; i++) {
//
//		size_t len = que.size();
//
//		for (size_t j = 0; j < len; j++) {
//			if (que.empty()) break;
//			red = make_pair(get<0>(que.front()), get<1>(que.front()));
//			blue = make_pair(get<2>(que.front()), get<3>(que.front()));
//			que.pop();
//
//			//cout << red.first << ' ' << red.second << ' ' << blue.first << ' ' << blue.second << '\n';
//
//			left(red, blue, i);
//			right(red, blue, i);
//			up(red, blue, i);
//			down(red, blue, i);
//		}
//
//	}
//
//	int ans{ 100 };
//
//	for (size_t i = 0; i < N; i++) {
//
//		for (size_t j = 0; j < M; j++) {
//
//			if (i == hole.first && j == hole.second) continue;
//
//			ans = ans < dp[hole.first][hole.second][i][j] ? ans : dp[hole.first][hole.second][i][j];
//			//cout << dp[hole.first][hole.second][i][j] << endl;
//
//		}
//
//	}
//
//	if (ans == 0) cout << -1 << endl;
//	else cout << (10 + ans) + 1 << '\n';
//	
//
//}