//#include <iostream>
//#include <queue>
//
//using namespace std;
//using Pair = pair<size_t, size_t>;
//unsigned long long W[16][16] = { 0 };
//
//int main() {
//
//	size_t N;
//	cin >> N;
//
//	vector< vector< unsigned long long > > dp(16);
//	for (auto& itr : dp) itr.resize((static_cast<int64_t>(1) << 16), static_cast<int64_t>(1) << 48);
//
//	for (size_t i = 0; i < N; i++) {
//		for (size_t j = 0; j < N; j++) {
//			cin >> W[i][j];
//			if (W[i][j] == 0) W[i][j] = static_cast<int64_t>(1) << 18;
//		}
//			
//			
//	}
//
//	queue< Pair > que;
//	que.push(make_pair(0, 1));
//	dp[0][1] = 0;
//	
//	Pair temp;
//	
//	while (!que.empty()) {
//		
//		temp = que.front();
//		que.pop();
//
//		for (size_t j = 0; j < N; j++) {
//			if (j == temp.first) continue;
//			else if ((temp.second & (static_cast<int64_t>(1) << j)) > 0) continue;
//			
//			if (dp[j][temp.second | (static_cast<int64_t>(1) << j)] > dp[temp.first][temp.second] + W[temp.first][j]) {
//				dp[j][temp.second | (static_cast<int64_t>(1) << j)] = dp[temp.first][temp.second] + W[temp.first][j];
//				//cout << temp.first << ' ' << j << ' ' << (temp.second | (static_cast<int64_t>(1) << j)) << ' ' << dp[j][temp.second | (static_cast<int64_t>(1) << j)] << '\n';
//				que.push(make_pair(j, temp.second | (static_cast<int64_t>(1) << j)));
//			}
//		}
//
//	}
//
//	unsigned long long ans{ static_cast<int64_t>(1) << 48 };
//
//	for (size_t i = 1; i < 16; i++) {
//		
//		if (ans > dp[i][(static_cast<int64_t>(1) << N) - 1] + W[i][0]) ans = dp[i][(static_cast<int64_t>(1) << N) - 1] + W[i][0];
//		//cout << dp[i][(static_cast<int64_t>(1) << N) - 1] + W[i][0] << '\n';
//
//	}
//
//	cout << ans << '\n';
//
//}