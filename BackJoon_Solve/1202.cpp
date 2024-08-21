//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <set>
//
//using namespace std;
//using Pair = pair<unsigned long long, unsigned long long>;
//using Vector = vector< Pair >;
//using Queue = priority_queue< Pair >;
//using Set = multiset<unsigned long long>;
//
//
//int main() {
//
//	size_t N, K;
//	cin >> N >> K;
//
//	Queue que;
//	unsigned long long a{ 0 }, b{ 0 };
//
//	for (size_t i = 0; i < N; i++) {
//
//		cin >> a >> b;
//		que.push(make_pair(b, a));
//
//	}
//
//	Set bags;
//	
//	for (size_t i = 0; i < K; i++){
//		cin >> a;
//		bags.insert(a);
//	}
//
//	unsigned long long ans{ 0 };
//
//	while (!que.empty() && !bags.empty()) {
//		//cout << que.top().first << ' ' << que.top().second << '\n';
//		auto iter = bags.find(que.top().second);
//		if(iter == bags.end()) iter = bags.upper_bound(que.top().second);
//		if (iter == bags.end()) que.pop();
//		else {
//			//cout << iter.operator*() << '\n';
//			ans += que.top().first;
//			bags.erase(iter);
//			que.pop();
//
//		}
//
//	}
//
//	cout << ans << '\n';
//
//}