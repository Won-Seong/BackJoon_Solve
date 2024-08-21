//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//using Pair = pair< int, int >;
//using Vector = vector< Pair >;
//using Matrix = vector< Vector >;
//using Tuple = tuple<size_t, size_t, int, bool>;
//using Queue = queue< Tuple >;
//
//int main() {
//	//ios::sync_with_stdio(false);
//	//cin.tie(NULL);
//
//	size_t N, M;
//	cin >> N >> M;
//
//	Queue que;
//	Matrix mat(N);
//	for (auto& itr : mat) itr.resize(M);
//
//	string input;
//	int temp{ 0 };
//
//	for (size_t i = 0; i < N; i++) {
//
//		cin >> input;
//
//		for (size_t j = 0; j < M; j++) {
//
//			if (input[j] == '0') temp = 1000 * 1000 + 1;
//			else temp = 1000 * 1000 + 2;
//			mat[i][j] = make_pair(temp, temp);
//
//		}
//
//	}
//
//	size_t l{ 0 }, r{ 0 };
//	int dist{ 0 };
//	bool flag{ 0 };
//	que.push(make_tuple(0, 0, 0, false));
//	mat[0][0] = make_pair(0, 0);
//
//	while (!que.empty()) {
//		
//		l = get<0>(que.front());
//		r = get<1>(que.front());
//		dist = get<2>(que.front());
//		flag = get<3>(que.front());
//		que.pop();
//
//		/*cout << l << ' ' << r << ' ' << dist << ' ' << flag << endl;
//
//		cout << endl;
//		for (const auto& itr : mat) {
//			for (const auto& itr_2 : itr) cout << itr_2.first << '\t';
//			cout << endl;
//		}
//
//		cout << endl;
//		for (const auto& itr : mat) {
//			for (const auto& itr_2 : itr) cout << itr_2.second << '\t';
//			cout << endl;
//		}*/
//
//		if (flag) {
//			if (l > 0) {
//
//				if (mat[l - 1][r].second == 1000 * 1000 + 2) ;
//				else if (dist + 1 < mat[l - 1][r].second) mat[l - 1][r].second = dist + 1, que.push(make_tuple(l - 1, r, dist + 1, true));
//
//			}
//
//			if (r > 0) {
//
//				if (mat[l][r - 1].second == 1000 * 1000 + 2) ;
//				else if (dist + 1 < mat[l][r - 1].second) mat[l][r - 1].second = dist + 1, que.push(make_tuple(l, r - 1, dist + 1, true));
//
//			}
//
//			if (l < N - 1) {
//
//				if (mat[l + 1][r].second == 1000 * 1000 + 2) ;
//				else if ( dist + 1 < mat[l + 1][r].second) mat[l + 1][r].second = dist + 1, que.push(make_tuple(l + 1, r, dist + 1, true));
//
//			}
//			
//			if (r < M - 1) {
//				if (mat[l][r + 1].second == 1000 * 1000 + 2) ;
//				else if (dist + 1 < mat[l][r + 1].second) mat[l][r + 1].second = dist + 1, que.push(make_tuple(l, r + 1, dist + 1, true));
//
//			}
//
//			/*if (l > 0 && mat[l - 1][r].second > -2 && dist + 1 < mat[l - 1][r].second) mat[l - 1][r].second = dist + 1, que.push(make_tuple(l - 1, r, dist + 1, true ));
//			if (r > 0 && mat[l][r - 1].second > -2 && dist + 1 < mat[l][r - 1].second) mat[l][r - 1].second = dist + 1, que.push(make_tuple(l, r - 1, dist + 1, true ));
//			if (l < N - 1 && mat[l + 1][r].second > -2 && dist + 1 < mat[l + 1][r].second) mat[l + 1][r].second = dist + 1, que.push(make_tuple(l + 1, r, dist + 1, true ));
//			if (r < M - 1 && mat[l][r + 1].second > -2 && dist + 1 < mat[l][r + 1].second) mat[l][r + 1].second = dist + 1, que.push(make_tuple(l , r + 1, dist + 1, true ));*/
//
//		}
//		else {
//
//			if (l > 0) {
//
//				if (mat[l - 1][r].first == 1000 * 1000 + 2 && dist + 1 < mat[l - 1][r].second) mat[l - 1][r].second = dist + 1, que.push(make_tuple(l - 1, r, dist + 1, true));
//				else if (mat[l - 1][r].first == 1000 * 1000 + 2);
//				else if(dist + 1 < mat[l - 1][r].first) mat[l - 1][r].first = dist + 1, que.push(make_tuple(l - 1, r, dist + 1, false));
//
//			}
//
//			if (r > 0) {
//
//				if (mat[l][r - 1].first == 1000 * 1000 + 2 && dist + 1 < mat[l][r - 1].second) mat[l][r - 1].second = dist + 1, que.push(make_tuple(l, r - 1, dist + 1, true));
//				else if (mat[l][r - 1].first == 1000 * 1000 + 2);
//				else if (dist + 1 < mat[l][r - 1].first) mat[l][r - 1].first = dist + 1, que.push(make_tuple(l, r - 1, dist + 1, false));
//
//			}
//
//			if (l < N - 1) {
//
//				if (mat[l + 1][r].first == 1000 * 1000 + 2 && dist + 1 < mat[l + 1][r].second) mat[l + 1][r].second = dist + 1, que.push(make_tuple(l + 1, r, dist + 1, true));
//				else if (mat[l + 1][r].first == 1000 * 1000 + 2);
//				else if (dist + 1 < mat[l + 1][r].first) mat[l + 1][r].first = dist + 1, que.push(make_tuple(l + 1, r, dist + 1, false));
//
//			}
//
//			if (r < M - 1) {
//
//				if (mat[l][r + 1].first == 1000 * 1000 + 2 && dist + 1 < mat[l][r + 1].second) mat[l][r + 1].second = dist + 1, que.push(make_tuple(l, r + 1, dist + 1, true));
//				else if (mat[l ][r + 1].first == 1000 * 1000 + 2);
//				else if (dist + 1 < mat[l][r + 1].first) mat[l][r + 1].first = dist + 1, que.push(make_tuple(l, r + 1, dist + 1, false));
//
//			}
//
//		}
//
//	}
//	
//	int ans = min(mat[N - 1][M - 1].first, mat[N - 1][M - 1].second);
//	if (ans > 1000 * 1000) cout << -1;
//	else cout << ans + 1;
//	
//
//}