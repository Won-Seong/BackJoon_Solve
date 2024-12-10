//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//using Pair = pair< unsigned int, size_t >;
//using Vector = vector< Pair >;
//using Matrix = vector< Vector >;
//
//size_t N, M;
//Matrix bus;
//Vector dp;
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cin >> N >> M;
//
//	bus.resize(N + 1);
//	dp.resize(N + 1, Pair(1 << 30, 0) );
//
//	size_t l, r;
//	unsigned int w;
//
//	for (size_t i = 0; i < M; i++){
//
//		cin >> l >> r >> w;
//		bus[l].push_back(make_pair(w, r));
//
//	}
//
//	priority_queue< Pair, Vector , greater< Pair > > que;
//
//	cin >> l >> r;
//
//	que.push(make_pair(0, l));
//	dp[l] = make_pair(0, l);
//	size_t src;
//
//	while (!que.empty()) {
//
//		src = que.top().second;
//		w = que.top().first;
//		que.pop();
//		if (src != l && w > dp[src].first) continue;
//		
//		for (const auto& itr : bus[src]) {
//			//cout << src << ' ' << w <<' ' << itr.second << ' ' << itr.first << ' ' << endl;
//
//			if (itr.first + w < dp[itr.second].first) {
//				dp[itr.second].first = itr.first + w;
//				dp[itr.second].second = src;
//				que.push(make_pair(dp[itr.second].first, itr.second));
//			}
//
//		}
//		
//	}
//
//	//for (const auto& itr : dp) cout << itr.first << ' ' << itr.second << '\n';
//	
//	cout << dp[r].first << '\n';
//	vector< size_t > cities;
//	cities.push_back(r);
//	while (cities.back() != l) cities.push_back(dp[cities.back()].second);
//	cout << cities.size() << '\n';
//	while (!cities.empty()) {
//		cout << cities.back() << ' ';
//		cities.pop_back();
//	}
//
//	
//
//	//unsigned int ans{ 1 << 18 };
//	//for (const auto& itr : dp[r]) ans = ans > itr ? itr : ans;
//	
//}