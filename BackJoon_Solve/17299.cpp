//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//using Pair = pair< unsigned int, size_t >;
//
//int main() {
//
//	size_t N;
//	cin >> N;
//
//	vector< unsigned int > vec(N);
//	vector< unsigned int > tab(10000000 + 1);
//
//	for (auto& itr : vec) cin >> itr, tab[itr]++;
//
//	stack< Pair > stk;
//	vector< int > ans(N);
//
//	for (size_t i = 0; i < N; i++) {
//
//		while (!stk.empty() && tab[stk.top().first] < tab[vec[i]]) {
//			ans[stk.top().second] = vec[i];
//			stk.pop();
//		}
//		
//		stk.push(make_pair(vec[i], i));
//	}
//
//	while (!stk.empty()) ans[stk.top().second] = -1, stk.pop();
//
//	for (const auto& itr : ans) cout << itr << ' ';
//}