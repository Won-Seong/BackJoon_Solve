//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include<unordered_set>
//#include <cmath>
//#include <string>
//
//using namespace std;
//using Vector = vector< int >;
//Vector tab(8);
//unordered_set< string > set;
//
//static void foo(const Vector& seq, Vector& vec, int val, const size_t& N, const size_t& M) {
//
//	vec.push_back(val);
//	tab[val] = 1;
//	if (vec.size() >= M) {
//		string temp;
//		
//		for (size_t i = 0; i < vec.size(); i++) {
//
//			temp = temp + to_string(seq[vec[i]]) + ' ';
//
//		}
//		if (set.find(temp) == set.end()) {
//			for (const auto& itr : vec) cout << seq[itr] << ' ';
//			cout << '\n';
//			set.insert(temp);
//		}
//
//		tab[vec.back()] = 0;
//		vec.pop_back();
//		return;
//	}
//	else {
//
//		for (int i = val + 1; i < N; i++) {
//			if( tab[ i ] == 0 ) foo(seq, vec, i, N, M);
//		}
//		tab[vec.back()] = 0;
//		vec.pop_back();
//		return;
//
//	}
//	return;
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t N, M;
//	cin >> N >> M;
//
//	Vector seq(N);
//	for (auto& itr : seq) cin >> itr;
//	sort(seq.begin(), seq.end());
//
//	Vector vec;
//
//	for(size_t i = 0 ; i < N; i++) foo(seq, vec, i, N, M);
//
//}