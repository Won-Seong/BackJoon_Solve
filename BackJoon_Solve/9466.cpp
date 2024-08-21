//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int main() {
//
//	size_t T;
//	cin >> T;
//
//	for (size_t i = 0; i < T; i++){
//
//		size_t n;
//		cin >> n;
//
//		vector<int> vec(n + 1);
//		vector<int> memo(n + 1, 0);
//		for (size_t i = 1; i < n + 1; i++) cin >> vec[i];
//
//		int ans{ int() };
//		stack<size_t> stk;
//	
//		for (size_t i = 1; i < n + 1; i++) {
//
//			if (vec[i] == 0) continue;
//			size_t idx{ i };
//			bool flag{ false };
//			
//			while (!(vec[idx] == 0 || vec[idx] == i || vec[idx] == idx || memo[idx] == 1))  memo[idx] = 1, stk.push(idx), idx = vec[idx];
//
//			if (memo[idx] == 1) {
//				size_t t = idx;
//				while (stk.top() != t) memo[stk.top()] = 0, stk.pop();
//				memo[stk.top()] = 0, stk.pop();
//				idx = stk.top();
//				vec[idx] = 0;
//			}
//
//			if (vec[idx] == 0) flag = true;
//			else if (vec[idx] == idx) flag = true;
//			else flag = false, stk.push(idx);
//
//			while (!stk.empty())  ans += flag, memo[stk.top()] = 0, vec[stk.top()] = 0, stk.pop();
//
//		}
//
//		cout << ans << '\n';
//
//	}
//
//}