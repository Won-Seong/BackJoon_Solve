//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//using Pair = pair< unsigned int, size_t >;
//using Vector = vector<unsigned int>;
//using Matrix = vector< Vector >;
//
//vector< vector< Pair > > bus;
//Matrix dp;
//Vector dpp;
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t N, M;
//	cin >> N >> M;
//
//	bus.resize(N + 1);
//	dpp.resize(N + 1, 1 << 30);
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
//	priority_queue< Pair, vector< Pair >, greater< Pair > > que;
//
//	cin >> l >> r;
//
//	que.push(make_pair(0, l));
//	dpp[l] = 0;
//	size_t src;
//
//	while (!que.empty()) {
//
//		src = que.top().second;
//		w = que.top().first;
//		que.pop();
//		if (src != l && w > dpp[src]) continue;
//		
//		for (const auto& itr : bus[src]) {
//			//cout << src << ' ' << w <<' ' << itr.second << ' ' << itr.first << ' ' << endl;
//			/*if (itr.first + w < dp[src][itr.second]) {
//				dp[src][itr.second] = itr.first + w;
//				
//				que.push(make_pair(dp[src][itr.second], itr.second));
//			}*/
//
//			if (itr.first + w < dpp[itr.second]) {
//				dpp[itr.second] = itr.first + w;
//				que.push(make_pair(dpp[itr.second], itr.second));
//			}
//
//		}
//		
//	}
//
//	/*for (const auto& itr : dp) {
//		for (const auto& itr2 : itr) cout << itr2 << ' ';
//		cout << endl;
//	}*/
//
//	//for (const auto& itr : dpp) cout << itr << ' ';
//
//	//unsigned int ans{ 1 << 18 };
//	//for (const auto& itr : dp[r]) ans = ans > itr ? itr : ans;
//	cout << dpp[r] << '\n';
//}