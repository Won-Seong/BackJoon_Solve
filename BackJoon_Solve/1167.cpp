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
//	//cout << idx << '\n';
//	vec[idx] = make_pair(0, 0);
//
//	if (idx == 1) {
//
//		int f = 0, s = 0, temp;
//
//		for (size_t i = 0; i < mat[idx].size(); i++) {
//			if (vec[mat[idx][i].first].first < 0) foo(mat, vec, mat[idx][i].first);
//			else continue;
//
//			temp = mat[idx][i].second + max(vec[mat[idx][i].first].first, vec[mat[idx][i].first].second);
//			if (f < temp) s = f,f = temp;
//			else if (s < temp) s = temp;
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
//			vec[idx].second = f;
//
//		}
//
//	} else if (mat[idx].size() <= 1) return;
//	else {
//		
//		int f = 0, s = 0, temp;
//
//		for (size_t i = 0; i < mat[idx].size(); i++) {
//			if (vec[mat[idx][i].first].first < 0) foo(mat, vec, mat[idx][i].first);
//			else continue;
//
//			
//			temp = mat[idx][i].second + max(vec[mat[idx][i].first].first, vec[mat[idx][i].first].second);
//			if (f < temp) s = f, f = temp;
//			else if (s < temp) s = temp;
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
//			vec[idx].second = f;
//
//		}		
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
//	Matrix mat(N + 1);
//
//	size_t l, r, c;
//	
//	for (size_t i = 0; i < N ; i++){
//		cin >> l;
//		while (true) {
//			cin >> r;
//			if (r == -1) break;
//			else cin >> c;
//
//			mat[l].push_back(make_pair(r, c));
//		}
//	}
//
//	Vector vec(N + 1, make_pair(-1, -1));
//
//	foo(mat, vec, 1);
//
//	int ans = 0;
//
//	for (const auto& itr : vec) ans = ans > itr.first + itr.second ? ans : itr.first + itr.second;//, cout << itr.first << ' ' << itr.second << '\n';
// 	cout <<  ans << endl;
//}