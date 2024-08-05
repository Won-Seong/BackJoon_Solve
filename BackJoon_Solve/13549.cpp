//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//using Pair = pair< size_t, unsigned int >;
//
//int main() {
//
//	size_t N, K;
//	cin >> N >> K;
//
//	vector< unsigned int > vec(100001, 100002);
//
//	vec[N] = 0;
//	queue< Pair > que;
//	que.push(make_pair(N, 0));
//
//	size_t idx{ size_t() };
//	unsigned int t{ 0 };
//
//	while (!que.empty()) {
//
//		idx = que.front().first;
//		t = que.front().second;
//
//		que.pop();
//
//		if (idx > 0 && vec[idx - 1] > t) vec[idx - 1] = t + 1, que.push(make_pair(idx - 1, t + 1));
//		if (idx < vec.size() - 1 && vec[idx + 1] > t) vec[idx + 1] = t + 1, que.push(make_pair(idx + 1, t + 1));
//		if (2 * idx < vec.size() && vec[2 * idx] > t) vec[2 * idx] = t, que.push(make_pair(2 * idx, t));
//
//
//	}
//
//	cout << vec[K];
//
//}