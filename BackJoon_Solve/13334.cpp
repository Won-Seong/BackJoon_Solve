//#include <iostream>
//#include <functional>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//using namespace std;
//using Pair = pair< long, long >;
//using Vector = vector< Pair >;
//long MAX = 100000000;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t N;
//	cin >> N;
//
//	Vector vec(N);
//	long min{ MAX };
//	for (auto& itr : vec) {
//		cin >> itr.first >> itr.second;
//		if (itr.first > itr.second) swap(itr.first, itr.second);
//		min = min > itr.first ? itr.first : min;
//	}
//	//for (auto& itr : vec) itr.first += min, itr.second += min;
//
//	sort(vec.begin(), vec.end(), [](const Pair& l, const Pair& r) { 
//		if (l.second == r.second) return l.first < r.first;
//		else return l.second < r.second;
//		});
//	//for (const auto& itr : vec) cout << itr.first << ' ' << itr.second << '\n';
//
//	long d{ long() };
//	cin >> d;
//
//	long ans{ 0 };
//	priority_queue< long, vector<long>, greater<long> > que;
//
//	for (size_t i = 0; i < N; i++) {
//
//		if (vec[i].second - vec[i].first <= d) que.push(vec[i].first);
//		while (!que.empty() && vec[i].second - que.top() > d) que.pop();
//		ans = ans > que.size() ? ans : que.size();
//		//cout << vec[i].first << ' ' << vec[i].second << '\n';
//		//cout << que.size() << '\n';
//		
//	}
//
//	cout << ans;
//
//
//
//}