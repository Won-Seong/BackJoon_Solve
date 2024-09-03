//#include <iostream>
//#include <stack>
//#include <vector>
//
//using namespace std;
//using Vector = vector<unsigned long long>;
//
//int main() {
//
//	while (true) {
//
//		size_t N;
//		cin >> N;
//		if (N == 0) break;
//
//		Vector vec(N);
//		stack<unsigned long long> stk;
//		unsigned long long t{ 0 };
//
//		for (auto& itr : vec) cin >> itr;
//		vec.push_back(0);
//
//		for (size_t i = 0; i <= N; i++) {
//
//			while (!stk.empty() && vec[i] < vec[stk.top()]) {
//
//				unsigned long long h = vec[stk.top()];
//				stk.pop();
//				unsigned long long w = i;
//				if (!stk.empty()) w = i - stk.top() - 1;
//				t = t > h * w ? t : h * w;
//
//			}
//			stk.push(i);
//
//		}
//
//		cout << t << '\n';
//
//	}
//
//}