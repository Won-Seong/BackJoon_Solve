//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//using Pair = pair<int, int>;
//using Vector = vector< Pair >;
//using Matrix = vector< Vector >;
//
//static void foo(const Matrix& mat, Vector& vec, size_t idx) {
//
//	
//	if (idx == 1) {
//
//		int f = 0, s = 0, temp;
//
//		for (size_t i = 0; i < mat[idx].size(); i++) {
//			foo(mat, vec, mat[idx][i].first);
//			temp = mat[idx][i].second + max(vec[mat[idx][i].first].first, vec[mat[idx][i].first].second);
//			if (f < temp) s = f,f = temp;
//			else if (s < temp) s = temp;
//
//		}
//
//		if (f > 0 && s > 0) {
//
//			vec[idx].first = f;
//			vec[idx].second = s;
//
//		}
//		else {
//
//			
//			vec[idx].second = f;
//
//		}
//
//	} else if (mat[idx].size() <= 0) return;
//	else {
//		
//		int f = 0, s = 0, temp;
//
//		for (size_t i = 0; i < mat[idx].size(); i++) {
//			foo(mat, vec, mat[idx][i].first);
//			temp = mat[idx][i].second + max(vec[mat[idx][i].first].first, vec[mat[idx][i].first].second);
//			if (f < temp) s = f, f = temp;
//			else if (s < temp) s = temp;
//
//		}
//
//		if (f > 0 && s > 0) {
//
//			vec[idx].first = f;
//			vec[idx].second = s;
//
//		}
//		else {
//
//
//			vec[idx].second = f;
//
//		}
//
//		
//
//	}
//
//	return;
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t N;
//	cin >> N;
//
//	if (N == 1) {
//
//		cout << 0 << '\n';
//		return 0;
//	}
//
//	Matrix mat(N + 1);
//
//	size_t l, r, c;
//	
//	for (size_t i = 0; i < N - 1; i++){
//		cin >> l >> r >> c;
//		mat[l].push_back(make_pair(r, c));
//		//mat[r].push_back(make_pair(l, c));
//	}
//
//	Vector vec(N + 1);
//
//	foo(mat, vec, 1);
//
//	int ans = 0;
//
//	for (const auto& itr : vec) ans = ans > itr.first + itr.second ? ans : itr.first + itr.second;//, cout << itr.first << ' ' << itr.second << '\n';
// 	cout <<  ans << endl;
//}